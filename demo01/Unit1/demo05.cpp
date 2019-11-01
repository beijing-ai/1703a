// demo05.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    //求两自然数m , n的最大公约数
	int m, n, i,num;
	cin >> m;
	cin >> n;
	for (i=1;i<=m&&i<=n;i++) 
	{
		if (m%i==0&&n%i==0) 
		{
			num = i;
		}
	}
	cout << num;
}

