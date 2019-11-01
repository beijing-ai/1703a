#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a;
    for (int i = 1; i < 101; i++)
    {
        a = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a = 0;
                break;
            }
        }
        if (a == 1)
        {
            cout << i <<endl;
        }
        
        
    }
    
    return 0;
}