#include <iostream>
using namespace std;


int main(int argc, const char** argv) {
    int a, b, c;
    cout << "请输入第一个";
    cin >> a;
    cout << "请输入第二个";
    cin >> b;
    cout << "请输入第三个";
    cin >> c;

    if (a >= b)
    {
        
        b = a;
        
    }
    if (b >= c)
    {
        c = b;
        
    }
    cout <<"最大数为：" << c;
    return 0;
}





