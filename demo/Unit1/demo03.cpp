// demo03.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//输入一个整数，将各位数字反转后输出。
	int n;
	cin >> n;
	int num = 0;
	while (1)
	{
		num = n % 10;//取余
		n /= 10;//取整
		cout << num;
		if (n < 1)
		{
			break;
		}
	}
}
