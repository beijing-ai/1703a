#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//1-1000之内的10个整数到一个长度为10的数组，
//判断数组中的元素是否能同时被3和5整除，若能同时整除，则输出该整数。
void demo1(){
    cout << "请输入1-1000之内的10个整数:" << endl;
    int a[10]={1,2,3,4,5,6,7,15,9,10};
    int i;
    for(i=0;i<10;i++){
        cin >> a[i];
        cout << a[i] << endl;
    }

    for(i=0;i<10;i++){
        int b = *(a+i);
        if(b%3==0 && b%5==0){
            cout << b<< endl;
        }
    }
}
//数组Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},
//编程实现数组元素的输入，然后输出这15个数，
//编写冒泡排序算法的函数void BubbleSort(int *array,int m)，
//其中array为数组名，m为数组大小，
//调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素
void BubbleSort(int *a,int m){
    int i,j,t;
    for(i=1;i<15;i++){
        for(j=0;j<i;j++){
           if(a[j]>a[i]){
            t = a[i];
            a[i] = a[j];
            a[j]=t;
           }
           //cout << i << j  << endl;
        }
    }
}
void demo2(){
    int a[15]={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14};
//    for(i=0;i<15;i++){
//        cout << "a[" << i << "]:"<< endl;
//        cin >> a[i];
//    }
    int i;
    for(i=0;i<15;i++){
        cout << " " << a[i];
    }
    cout << endl;
    BubbleSort(a,15);
    for(i=0;i<15;i++){
        cout << " " << a[i];
    }
}
//某次月考中，每个小组是由4名学生组成
//现存储其中一个小组4名学生的姓名和成绩
//然后输入一个学生的姓名，查找该学生是否为小组的成员
//如果是提示是小组成员，同时输出该学生的成绩，如果不是提示不是小组成员。
//要求：将查找到的小组成员信息写入到E盘下文件夹名为stuscore的stu_inform.txt文件中
struct Student{
    string name;
    int score;
};
void demo3(){
    Student xz[4] = {{"张三",60},{"李四",90},{"王五",80},{"赵六",70}};
    int i = 0;
    string name;
    cout << "请输入您要查找分数的同学姓名:" << endl;
    cin >> name;
    ifstream inf;
    ofstream outf;
    string s;
    inf.open("F://Repository//1703a//11-4-task//stuscore//in.txt");
    outf.open("F://Repository//1703a//11-4-task//stuscore//out.txt");
    while (getline(inf,s)){
        outf << s << '\n';
    }
    for(i=0;i<4;i++){
        if(xz[i].name==name){
            outf << xz[i].name << "score:" << xz[i].score << '\n';
            cout << xz[i].name << "score:" << xz[i].score << endl;
        }
    }
    inf.close();
    outf.close();

}
int main(){
    demo3();

}
