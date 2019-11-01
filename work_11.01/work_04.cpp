#include <iostream>
using namespace std;

int main()
{
	//4、输入一个整数，求出它的所有因子
	int num,i;
	cout << "请输入一个数：";
	cin >> num;
	cout << num<<"的因子分别为：";
	for (i=1;i<=num;i++)
	{
		if (num%i==0)
		{
			cout << i<<" ";
		}
	}
	
 } 



