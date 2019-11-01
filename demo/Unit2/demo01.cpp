// demo01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //输入一行文字，统计有多少个单词。单词和单词之间用空格分开
	char str[80];
	int i,nums=1;
	cin.getline(str,80);
	for (i = 0; str[i] != '\0';i++) 
	{
		if (str[i]==' ') 
		{
			nums++;
		}
	}
	cout << nums;
	return 0;
}

