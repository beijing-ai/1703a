// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//有3个整数a, b, c，由键盘输入，输出其中最大的数
	//int a, b, c;
	//cout << "请输入第一个整数:";
	//cin >> a;
	//cout << "请输入第二整数:";
	//cin >> b;
	//cout << "请输入第三个整数:";
	//cin >> c;
	//if (a > b&&a > c) {
	//	cout << a;
	//}else if(b>a&&b>c){
	//	cout << b;
	//}
	//else if (c > a&&c > b) {
	//	cout << c;
	//}

	//求自然数1~10之和
	//int a;
	//int sum = 0;
	//for (a = 1; a <=10; a++) {
	//	sum += a;
	//}
	//cout << "总和:"<<sum;


	//输入一个整数，将各位数字反转后输出
	//int i;
	//int n;
	//cin >> n;
	//int num = 0;
	//for (i = 0; ; i++)
	//{
		//num = n % 10;
		//n /= 10;
		//cout << num;
		//if (n < 1)
		//{
			//break;
		//}
	//}
	//return 0;


	//输入一个整数，求出它的所有因子。
	/*int a,i;
	cout << "请输入一个整数:";
	cin >> a;
	for (i = 1; i <= a; i++) {
		if (a%i == 0)
		{
			cout << i;
		}
	}
	return 0;*/

	//求两自然数m, n的最大公约数
	/*int m, n,i;
	cout << "请输入第一个自然数:";
	cin >> m;
	cout << "请输入第二次个自然数:";
	cin >> n;
	int i, max;
	for (i = 1; i <= m && i <= n; i++) {
		cout << i;
		if (m%i == 0 && n%i == 0) {
			max = i;
		}
	}
	cout << "m与n共同的最大公约数为";
	cout << max;*/


	//求1 - 100以内的素数
	/*int i, j;
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
	return 0;*/


	//鸡兔共有30只，脚共有90只，问鸡兔各有多少？
	/*	int i, j;
		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++)
			{
				if (i + j == 30)
				{
					if (2 * i + 4 * j == 90)
					{
						cout << "鸡" << i;
						cout << "兔" << j;
					}
				}
			}
		}
		return 0;*/

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
