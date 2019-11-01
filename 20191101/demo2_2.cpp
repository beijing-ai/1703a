#include <iostream>
using namespace std;
/*交通信号灯有红，黄，绿三种颜色，利用枚举和switch实现如下功能：
1代表红灯，2代表黄灯，3代表绿灯
    输入1输出 stop
    输入2输出 wait
    输入3输出 go*/
enum signal {red=1,yellow=2,green=3};

int main(){
    int lights;
    cout << "请输入信号灯编号："; 
    cin >> lights;
    switch(lights){
    	case red:
    		cout << "stop" << endl;
    		break;
    	case yellow:
    		cout << "wait" << endl;
    		break;
    	case green:
    		cout << "go" << endl;
    		break;
    	default:
    		cout << "输入错误" << endl; 
	}
	return 0;
}
