#include <iostream>
using namespace std;
#include <string.h>

int main()
{
	//3������һ������������λ���ַ�ת�������
	int i,num,a;
	cin >> num;
	for (i=0;;i++)
	{
		a = num%10;
		num/= 10;
		cout << a;
		if (num<1)
		{	
			break;
		}
	}
	
	 
}
