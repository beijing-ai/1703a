#include <iostream>
using namespace std;

int main()
{
	//4������һ�����������������������
	int num,i;
	cout << "������һ������";
	cin >> num;
	cout << num<<"�����ӷֱ�Ϊ��";
	for (i=1;i<=num;i++)
	{
		if (num%i==0)
		{
			cout << i<<" ";
		}
	}
	
 } 



