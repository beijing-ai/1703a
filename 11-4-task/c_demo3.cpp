#include <iostream>
using namespace std;

//�������10��1-1000֮�ڵ���������������array��
//�ж�������Ԫ���Ƿ���ͬʱ��4��7����
//����ͬʱ�����������������Ԫ�غ��±ꡣ
int main(){
    cout << "�������10��1-1000֮�ڵ�����:" << endl;
    int a[10],i,j;
    for(i=0;i<10;i++){
        cin >> a[i];
    }
    for(i=0;i<10;i++){
        if(a[i]<1 || a[i] >1000){
           cout << "����Υ�� "<< endl;
           return 0;
        }
    }
    for(i=0;i<10;i++){
        if (a[i]%4==0 && a[i]%7==0){
            cout <<"�±�:"<<i<<"����:"<<a[i] << endl;
        }
    }

}
