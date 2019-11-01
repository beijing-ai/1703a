// demo02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//求自然数1~10之和
	int i;
	int	num = 0;
	for (i = 1; i <= 10; i++) {
		num += i;
	}
	cout << num;
}

