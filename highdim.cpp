//��������һ��3��3�еĶ�ά���飬��Խ���֮��
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
