#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//1-1000֮�ڵ�10��������һ������Ϊ10�����飬
//�ж������е�Ԫ���Ƿ���ͬʱ��3��5����������ͬʱ�������������������
void demo1(){
    cout << "������1-1000֮�ڵ�10������:" << endl;
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
//����Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},
//���ʵ������Ԫ�ص����룬Ȼ�������15������
//��дð�������㷨�ĺ���void BubbleSort(int *array,int m)��
//����arrayΪ��������mΪ�����С��
//����ð�������㷨����15���������������������������������Ԫ��
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
//ĳ���¿��У�ÿ��С������4��ѧ�����
//�ִ洢����һ��С��4��ѧ���������ͳɼ�
//Ȼ������һ��ѧ�������������Ҹ�ѧ���Ƿ�ΪС��ĳ�Ա
//�������ʾ��С���Ա��ͬʱ�����ѧ���ĳɼ������������ʾ����С���Ա��
//Ҫ�󣺽����ҵ���С���Ա��Ϣд�뵽E�����ļ�����Ϊstuscore��stu_inform.txt�ļ���
struct Student{
    string name;
    int score;
};
void demo3(){
    Student xz[4] = {{"����",60},{"����",90},{"����",80},{"����",70}};
    int i = 0;
    string name;
    cout << "��������Ҫ���ҷ�����ͬѧ����:" << endl;
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
