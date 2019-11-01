// demo04.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    //输入一个整数，求出它的所有因子
	int a,i;
	cin >> a;
	for (i = 1; i <= a;i++) {
		if (a%i==0) {
			cout << i<<endl;
		}
	}



}

