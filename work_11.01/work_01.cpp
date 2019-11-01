#include <iostream>
using namespace std;
#include <string.h>

int main()
{
	int a,b,c;
	
	cout << "请依次输入三个数：" ;
//	a = cin.get();    //用于接收字符 
//	cin.get(b);
//	c = cin.get();
	cin >> a >>b>>c;
	cout << "最大值为：";
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

