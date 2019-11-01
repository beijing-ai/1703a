//任意输入一个3行3列的二维数组，求对角线之和
#include <iostream> 
using namespace std;
int main()
{
	int a[3][3];
	int sum = 0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << a[i][j] << "\t";
			if(i==j)
			{
				sum += a[i][j];
			}
		}
		cout << "\n";
	}
	cout << sum;
	return 0;
};
