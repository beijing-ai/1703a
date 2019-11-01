#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "请输入一个整数";
    cin >> a;
    int b;
    cout << "请输入一个整数";
    cin >> b;
    int g;
    for (int i = 1; i <= a && i <=b; i++)
    {
        if (a % i == 0 && b % i ==0)
        {
            g = i;
        }
        
    }
    cout << g;
    return 0;
}
