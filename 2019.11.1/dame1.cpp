# include <iostream>
using namespace std;

int main(int argc, const char** argv)
{  
    int a;
    int b;
    int c;
   cout << "1:";
   cin >> a;
   cout << "2:"; 
	cin >> b;
   cout << "3:"; 
	cin >> c;
   if (a >= b)
   {
      b = a;
   }
   if (b >= c)
   {
      c = b;
   }
   cout << c;

   return 0;
}