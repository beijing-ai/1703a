//输入一个整数，求出它的所有因子
#include <iostream>
using namespace std;
int main()
{
	int num;
	int i;
	cin >> num;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cout << i << "\t";
		}
	}
	
};
