#include <iostream>
using namespace std;

int main()
{
	//5、求两自然数m , n的最大公约数
	int m,n,i,max;
	cout << "请输入两个数：";
	cin >> m>>n;

	for (i=1;i<=m&&i<=n;i++)
	{
		if (m%i==0&&n%i==0)
		{
			max=i;
		}
	}
	cout << "这两个数的最大公约数为：";
	cout << max;
	
}
