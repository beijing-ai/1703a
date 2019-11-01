#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    
    for (int i = 1; i <= 30; i++)
    {
       for (int j = 1; j <= 30; j++)
       {
           if (i * 2 + j * 4 == 90 && (i + j) == 30)
           {

               cout <<"兔子有" << j << "鸡有" << i <<endl;
           }
       }
       
    }
    
    return 0;
}

