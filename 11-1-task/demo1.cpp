#include <iostream>
#include <iomanip>//���Ը�ʽ��
#include <math.h>
using namespace std;
//#define size 100

struct Student{
    string name;
    int age;
    float height;
};
void test1(){
    int i;
    int j;
    for(i=0;i<4;i++){
        for(j=0;j<7;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void test2(){
    int i;
    int j;
    for(i=0;i<4;i++){
        for(j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void test3(){
    int i;
    int j;
    for(i=0;i<4;i++){
        for(j=4-i;j>0;j--){
            cout << " ";
        }
        for(j=0;j<2*i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(i=4;i>=0;i--){
        for(j=4-i;j>0;j--){
            cout << " ";
        }
        for(j=0;j<2*i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
//��3������a,b,c���ɼ������룬���������������
int test4(){
    int a,b,c;
    cout << "���ÿո�����������������"<< endl;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        cout << "max :" << a<<endl;
        return 0;
    }
    if(b>=a && b>=c){
        cout << "max :" << b<<endl;
        return 0;
    }
    if(c>=a && c>=b){
        cout << "max :" << c<<endl;
        return 0;
    }
}
//����Ȼ��1~10֮��
void test5(){
    int i = 1;
    int sum_1 = 0;
    for(i;i<=10;i++){
        sum_1 += i;
    }
    cout << "1~10�ܺͣ�" << sum_1 << endl;
}
//����һ������������λ���ַ�ת�������
void test6(){
    int a;
    cout << "������һ��������" << endl;
    cin >>a;
    if(a>=2147483647){
        cout << "�������߯���ˣ�" <<endl;
    }else{
        int i,b,c;
        for(i=1;i<11;i++){
            b = int(pow(10,i)+0.1);
            c = int(pow(10,i-1)+0.1);
            cout << (a%b)%c << endl;
            //cout << (a%10)*b << endl;
            //cout << a << endl;
        }
        cout << a << endl;
    }
}
//����һ����������������������ӡ�
void test7(){
    int a;
    cin >> a;
    cout << a<< endl;
    int i;
    for(i=1;i<a;i++)
    {
//        cout << a%i << endl;
        if(a%i==0){
            cout << " " << i << endl;
        }
    }
}
//������Ȼ��m , n�����Լ��
void test8(){
    int a,b;
    cout << "input two number:"<< endl;
    cin >> a >> b;
    int c=0;
    if(a>c){
        c=a;
    }
    if(b>c){
        c=b;
    }
    int i;
    int max_n=0;
    for(i=1;i<c;i++){
        if(a%i==0 && b%i==0 && i>max_n){
            max_n = i;
        }
    }
    cout << "gongyushu :" << max_n << endl;
}
//��1-100���ڵ�����
void test9(){
    int i,j;
    int no;
    cout << 1 << endl;
    for(i=2;i<=100;i++){
        no=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                no=1;
            }
        }
        if(no==0){
            cout << i << endl;
        }
    }

}
//���ù���30ֻ���Ź���90ֻ���ʼ��ø��ж��٣�
void test10(){
    int x,y;
    int i = 0;
    for(i;i<=30;i++){
        if((i*2+(30-i)*4)==90){
            cout << "ji:" << i <<endl;
            cout << "tu:" << 30-i <<endl;
        }
    }
}
//��������һ��3��3�еĶ�ά���飬��Խ���֮�͡�
void test11(){
    int a[3][3];
    int i,j;
    a[0][0] =1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << "a["<<i<<"]["<<j<<"]\n";
            cin >> a[i][j];
        }
    }
    int su = 0;
    for(i=0;i<3;i++){
        su +=a[i][i];
    }
    cout << "sum:" << su << endl;
}
int main(){
   test11();
}
