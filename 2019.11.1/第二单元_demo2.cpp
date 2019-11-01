# include <iostream>
using namespace std;

int main(int argc, const char** argv)
{  
    int i;
    enum lamp{red=1,yellow=2,green=3};

    cin >> i;
    switch (i)
    {
    case 1:
        cout << "stop";
        break;
    case 2:
        cout << "wait";
        break;
    case 3:
        cout << "go";
        break;
    
    default:
        break;
    }
    return 0;
}