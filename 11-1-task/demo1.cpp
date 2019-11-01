#include <iostream>
#include <iomanip>//可以格式化
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
//有3个整数a,b,c，由键盘输入，输出其中最大的数。
int test4(){
    int a,b,c;
    cout << "请用空格间隔输入三个整数："<< endl;
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
//求自然数1~10之和
void test5(){
    int i = 1;
    int sum_1 = 0;
    for(i;i<=10;i++){
        sum_1 += i;
    }
    cout << "1~10总和：" << sum_1 << endl;
}
//输入一个整数，将各位数字反转后输出。
void test6(){
    int a;
    cout << "请输入一个整数：" << endl;
    cin >>a;
    if(a>=2147483647){
        cout << "您输入的忒大了！" <<endl;
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
//输入一个整数，求出它的所有因子。
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
//求两自然数m , n的最大公约数
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
//求1-100以内的素数
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
//鸡兔共有30只，脚共有90只，问鸡兔各有多少？
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
//任意输入一个3行3列的二维数组，求对角线之和。
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
