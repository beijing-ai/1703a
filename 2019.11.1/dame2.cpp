#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b = 0;
    int i ;
    for (i = 0; i < 10; i++)
    {
        b += a[i];
    }
    cout << b << "///";
    return 0;
}