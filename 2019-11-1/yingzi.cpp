#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "请输入一个整数";
    cin >> a;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            cout <<"因子为：" << i;
        }
    }
    
    return 0;
}
