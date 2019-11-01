// day01_2019_11_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "----------输出菱形---------";
	int i, j, k;

	for (i = 0; i < 4; i++)
	{
		for (k = 0; k < 4 - i; k++)
		{
			cout << " ";

		}
		for (j = 0; j < 7 - 2 * (3 - i); j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < i + 2; k++)
		{
			cout << " ";
		}
		for (j = 0; j < 7 - 2 * (1 + i); j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "有3个整数a,b,c，由键盘输入，输出其中最大的数" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b&& a > c)
	{
		cout << a << endl;
	}
	if (b > a&& b > c)
	{
		cout << b << endl;
	}
	if (c > a&& c > b)
	{
		cout << c << endl;

	}

	int e;
	int sum = 0;

	cout << "求自然数1~10之和" << endl;
	for (e = 1; e < 11; e++)
	{
		sum += e;
	}
	cout << sum << endl;

	cout << "输入一个整数,将各位数字反转后输出" << endl;
	int n;
	int right;
	int enter;
	cin >> enter;


	for (n=enter;n!=0;n/=10)
	{
		right = n % 10;
		cout << right;
	}
	cout << "\n";


	cout << "输入一个整数，求出它的所有因子";
	cout << "请输入一个整数：";
	int enter1;
	cin >> enter1;
	int f;
	for (f=1;f<enter1;f++)
	{
		if (enter1 % f == 0)
		{
			cout << f << "\t";
		}
		
	}
	cout << "\n";

	cout << "求两自然数m , n的最大公约数";
	cout << "\n";
	cout << "请输入一个数m:";
	int m;
	cin >> m;
	cout << "请输入一个数n:";
	int nm;
	cin >> nm;
	int mn;
	if (m < n) 
	{
		for (mn=m;mn>0;mn--)
		{
			if (m%mn==0 && nm%mn==0)
			{
				cout << mn <<endl;
				break;
			}
		}
	}
	else
	{
		for (mn = nm; mn > 0; mn--)
		{
			if (m % mn == 0 && nm % mn == 0)
			{
				cout << mn << endl;
				break;
			}
		}
	}
	cout << "\n";


	cout << "求1-100以内的素数";
	int g;
	int h;
	for (g=2;g<100;g++) 
	{
		for (h=2;h<=g;h++)
		{
			if (g % h == 0 && g!=h)
			{
				break;
			}
			if (g%h==0 && g==h)
				cout << g << "\n";
		}
	}
	cout << "\n";

	cout << "鸡兔共有30只，脚共有90只，问鸡兔各有多少？";
	int ji;
	int tu;
	for (ji=0;ji<=30;ji++)
	{
		for (tu=0;tu<=30-ji;tu++)
		{
			if (ji*2 + tu*4 ==90 && ji+tu == 30)
			{
				cout << "鸡：" << ji << "\n";
				cout << "兔:" << tu << "\n";
			}
		}
	}

	cout << endl;


}
