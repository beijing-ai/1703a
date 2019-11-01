# include <iostream>
using namespace std;

int main(int argc, const char** argv)
{  
    int i,k;
    bool floa;
    
    for ( i = 2; i < 101; i++)
    {   
        floa = true;
        for ( k = 2; k < i; k++)
        {
            if (i%k==0)
        {
            floa = false;
            break;
        }
           
        }
         if (floa)
        {
            cout << i << "\t";
        }
    }
    
    return 0;
}