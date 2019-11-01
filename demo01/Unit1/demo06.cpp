// demo06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
   //求1-100以内的素数
	int i,j;
	for (i=1;i<=100;i++) 
	{
		int num = 0;
		for (j=1;j<=i;j++) 
		{
			if (i%j==0) 
			{
				num ++;
			}
		}
		if (num<=2) 
		{
			cout << i<<endl;
		}
	}
}
