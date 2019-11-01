//求自然数1~10之和
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int i;
	for(i=1;i<=10;i++)
	{
		sum += i; 
	}
	cout << sum;
};
