#include <iostream>
using namespace std;

int main(int argc, const char** argv) {

    int num;
    int i;
    cin >> num;

    for ( i = 0; i < num; i++)
    {
        if (num % (i+1) == 0)
        {
            cout << (i+1) << "\t";
        }
        
    }

    return 0;
}




