#include <iostream>
using namespace std;
#include <string.h>

int main()
{
	int a,b,c;
	
	cout << "������������������" ;
//	a = cin.get();    //���ڽ����ַ� 
//	cin.get(b);
//	c = cin.get();
	cin >> a >>b>>c;
	cout << "���ֵΪ��";
	if (a>b)
	{
		if (a>c)
		{
			cout << a;	
		}
		else
		{
			cout << c;
		}
	}
	else
	{
		if (b>c)
		{
			cout << b;
		}
		else
		{
			cout << c;
		}
	}
	return 0;
}

