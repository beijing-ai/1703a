// pro1zuoye.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//有3个整数a, b, c，由键盘输入，输出其中最大的数。

	//求自然数1~10之和

	/*int a=0;
	int x;
	for (x = 0; x <= 10; x++)
	{
		a = a + x;
	}
	cout << a;*/


	//输入一个整数，将各位数字反转后输出。
	/*int n;
	int m;
	cout << "输入一个数：";
	cin >> n;
	cout << "翻转后的数为";
	do
	{
		m = n%10;
		cout << m;
		n /= 10;
	} while (n != 0);
	cout << endl;*/



	//输入一个整数，求出它的所有因子。

	/*int a,i;
	cout << "请输入一个整数";
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		if (a%i==0)
		{
			cout << i;
		}
		cout << "\t";
	}*/


	//求两自然数m, n的最大公约数
	/*int m, n;
	cout << "请输入第一个数：";
	cin >> m;
	cout << "请输入第二个数：";
	cin >> n;

	int k,a;
	for( k=1 ; k<=m && k<=n;k++)
	{
		if (m%k == 0 && n%k == 0)
		{
			a = k;
		}
		
	}
	cout <<"最大公因数：" << a;*/


	//求1 - 100以内的素数
	int i, j;
	bool flag;
	for (i = 2; i < 101; i++) {
		flag = true;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				flag = false;
			}
		}
		if (flag)
		{
			cout << i << "\n";
		}
	}
	return 0;

	//鸡兔共有30只，脚共有90只，问鸡兔各有多少
	/*int x, y;
	for (x = 1; x <= 30; x++)
	{
		y = 30 - x;
		if ((2 * x) + (4 * y) == 90)
		{
			cout << "鸡" << x <<"\t" ;
			cout << "兔子" << y;

		}
		
	}*/
}

