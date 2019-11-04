#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
     // 输入1-1000之内的10个整数到一个长度为10的数组，判断数组中的元素是否能同时被3和5整除，
    // 若能同时整除，则输出该整数。
    int a[10];
    cout << "1-1000:";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i]%3==0 && a[i]%5==0)
        {
            cout << a[i];
        }
    }
    return 0;
}