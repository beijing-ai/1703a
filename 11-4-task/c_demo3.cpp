#include <iostream>
using namespace std;

//随机输入10个1-1000之内的整数，放在数组array中
//判断数组内元素是否能同时被4和7整除
//若能同时整除，则输出该数组元素和下标。
int main(){
    cout << "随机输入10个1-1000之内的整数:" << endl;
    int a[10],i,j;
    for(i=0;i<10;i++){
        cin >> a[i];
    }
    for(i=0;i<10;i++){
        if(a[i]<1 || a[i] >1000){
           cout << "输入违法 "<< endl;
           return 0;
        }
    }
    for(i=0;i<10;i++){
        if (a[i]%4==0 && a[i]%7==0){
            cout <<"下标:"<<i<<"数字:"<<a[i] << endl;
        }
    }

}
