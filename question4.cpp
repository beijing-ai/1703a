//����һ�����������������������
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
