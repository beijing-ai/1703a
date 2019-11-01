// demo07.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    //鸡兔共有30只，脚共有90只，问鸡兔各有多少？
	int j,t,num=30,jiao=88;
	for (j=1;j<num;j++) 
	{
		for (t=1;t<num;t++) 
		{
			if (j + t == num) 
			{
				if (2*j+4*t==jiao) 
				{
					cout << j << endl;
					cout << t;
				}
			}
		}
	}

}

