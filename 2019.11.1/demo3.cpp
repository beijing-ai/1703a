#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
    cout << "a:";
    int a;
    int num;
    cin >> num;
    int i;
    for ( i = 0; ; i++)
    {
        a = num % 10 ;
        num /= 10;
        cout << a ;
        if (num < 1)
        {
            break;
        }
        
    }
}




