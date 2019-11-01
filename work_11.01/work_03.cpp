#include <iostream>
using namespace std;
#include <string.h>

int main()
{
	//3、输入一个整数，将各位数字反转后输出。
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
