#include <iostream>
using namespace std;
//使用指针进行变量值的交换
void change_value(int &a,int &b){
    int c = 0;
    c = a;
    a = b;
    b = c;
}
void change_value2(int *a,int *b){
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int a,b;
    cin >>a >>b;
    cout << "orign:"<<a << b << endl;    change_value(a,b);
    cout << "now:"<<a << b<< endl;
    change_value2(&a,&b);
    cout << "now:"<<a << b;
    return 0;
}
