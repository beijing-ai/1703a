import tensorflow as tf
import os
import yolo.config as cfg  # 配置
from preprocess import Data_preprocess  # 数据处理
from yolo.yolo_v2 import yolo_v2  # 模型
from convert_weight import optimistic_restore  # 使用预训练

os.environ['CUDA_VISIBLE_DEVICES'] = "0,1"
cfg.WEIGHTS_FILE = "yolo_v2.ckpt"


class Train(object):
    def __init__(self, yolo, data):
        self.yolo = yolo
        self.data = data
        self.num_class = len(cfg.CLASSES)
        self.max_step = cfg.MAX_ITER
        self.saver_iter = cfg.SAVER_ITER
        self.initial_learn_rate = cfg.LEARN_RATE
        self.output_dir = os.path.join(cfg.DATA_DIR, 'output')
        weight_file = os.path.join(self.output_dir, cfg.WEIGHTS_FILE)
        # 保存模型
        self.variable_to_restore = tf.global_variables()
        self.saver = tf.train.Saver(self.variable_to_restore)
        # 学习率进行一个变小的过程
        self.global_step = tf.get_variable('global_step', [], initializer=tf.constant_initializer(0), trainable=False)
        self.learn_rate = tf.train.exponential_decay(self.initial_learn_rate, self.global_step, 20000, 0.1,
                                                     name='learn_rate')
        self.optimizer = tf.train.AdamOptimizer(learning_rate=self.learn_rate).minimize(self.yolo.total_loss,
                                                                                        global_step=self.global_step)
        # 结合当前和过去一阶段的迭代信息
        self.average_op = tf.train.ExponentialMovingAverage(0.999).apply(tf.trainable_variables())
        with tf.control_dependencies([self.optimizer]):
            self.train_op = tf.group(self.average_op)
        # 设置gpu的内存无上限
        config = tf.ConfigProto(gpu_options=tf.GPUOptions())
        self.sess = tf.Session(config=config)
        self.sess.run(tf.global_variables_initializer())
        # 加载预训练模型
        optimistic_restore(self.sess, weight_file)

    def train(self):
        # 加载训练测试集
        labels_train = self.data.load_labels('train')
        labels_test = self.data.load_labels('test')
        num = 5
        for step in range(0, self.max_step + 1):
            images, labels = self.data.next_batches(labels_train)
            feed_dict = {self.yolo.images: images, self.yolo.labels: labels}
            if step % 50 == 0:
                loss, _ = self.sess.run([self.yolo.total_loss, self.train_op], feed_dict=feed_dict)
                sum_loss = 0
                for i in range(num):
                    images_t, labels_t = self.data.next_batches_test(labels_test)
                    feed_dict_t = {self.yolo.images: images_t, self.yolo.labels: labels_t}
                    loss_t = self.sess.run(self.yolo.total_loss, feed_dict=feed_dict_t)
                    sum_loss += loss_t
                print('Epoch: {self.data.epoch}, Step: {int(step)}, train_Loss: {loss}, test_Loss: {sum_loss / num}')
                if loss < 1e4:
                    pass
                else:
                    print('loss > 1e04')
                    break
            else:
                self.sess.run(self.train_op, feed_dict=feed_dict)

            if step % self.saver_iter == 0:
                self.saver.save(self.sess, self.output_dir + '/yolo_weight.ckpt', global_step=step)


if __name__ == '__main__':
    yolo = yolo_v2()
    pre_data = Data_preprocess()
    train = Train(yolo, pre_data)
    print('开始训练...')
    train.train()
    print('训练成功')
