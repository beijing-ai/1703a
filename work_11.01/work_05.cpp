#include <iostream>
using namespace std;

int main()
{
	//5��������Ȼ��m , n�����Լ��
	int m,n,i,max;
	cout << "��������������";
	cin >> m>>n;

	for (i=1;i<=m&&i<=n;i++)
	{
		if (m%i==0&&n%i==0)
		{
			max=i;
		}
	}
	cout << "�������������Լ��Ϊ��";
	cout << max;
	
}
