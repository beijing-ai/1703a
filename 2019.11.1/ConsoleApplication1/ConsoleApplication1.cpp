// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>
#include<algorithm>

using namespace std;

int haha()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}

int max_num()
{
	int a, b, c;

	cin >> a >> b >> c;
	int d = a;
	int arr[] = { a,b,c };
	for (int i = 0; i < 3; i++)
	{
		if (d < arr[i]) {
			d = arr[i];
		}
	}

	cout << "最大数字" << d << endl;
	return 0;
}
int reverse()
{
	using namespace std;
	int x[100], c = 0;
	for (int i = 0; ; i++)
	{//第五行
		cin >> x[i];
		if (x[i] == 0)
		{
			break;
		}
		cout << x[i];
	}
	return 0;
}
int paint()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++) 
		{
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i*2+1; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	cout << "----------" << endl;
	for (int i = -3; i <4; i++)
	{
		for (int j = -3; j < 4; j++)
		{
			if (abs(j) + abs(i) < 4)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}


	return 0;
}

int yinzi()
{
	int a;
	cin >> a;
	cout << a << "的因子" << endl;
	for (int i = 1; i <= sqrt(a) + 1; i++)
	{
		if (a % i == 0)
		{
			cout << i << "," << a / i <<"\t";
		}
	}
	return 0;
}

int gongyue()
{
	int a, b;
	cin >> a;
	cin >> b;
	int c, d;
	while (true)
	{
		c = max(a, b);
		d = min(a, b);
		if ((c % d) == 0)
		{
			cout << d;
			break;
		}
		a = d;
		b = c - d;
	}
	return 0;
}
int sushu()
{

	for (int i = 3; i < 101; i++)
	{
		bool flag = true;
		for (int j = 2; j < sqrt(i) + 1; j++)
		{
			if ((i % j) == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag) cout << i << endl;
	}
	return 0;
}
int main()
{
	//haha();
	//max_num();
	//paint();
	//reverse();
	//yinzi();
	//gongyue();
	sushu();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
