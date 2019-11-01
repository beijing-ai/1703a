//求两自然数m , n的最大公约数
#include <iostream>
using namespace std;
int main()
{
	int a,b,i,y;
	cin >> a >> b;
	for(i=1;i<=min(a,b);i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			y = i;
		}
	}
	cout << y;
};
