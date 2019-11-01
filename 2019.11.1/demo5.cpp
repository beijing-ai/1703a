# include <iostream>
using namespace std;

int main(int argc, const char** argv)
{  
    int a,b,i;
    cin >> a;
    cin >> b;

    for ( i = 1;; i++)
    {
        if (i%a==0 & i%b==0)
        {
            cout << i;
            break;
        }
        
    }
    
    return 0;
}