#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int b;
    cout << "请输入一个整数";
    cin >> a;
    while (a)
    {
        b = a % 10;
        cout << b;
        a /= 10;
    }
    


    return 0;
}
