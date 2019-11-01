// pro2zuoye.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*char senteance[100], prev = ' ';
	int i, num = 0;
	cout << "请输入句子,以空格分隔：";

	gets_s(senteance);
	for (i = 0; senteance[i] != '\0'; i++) {
		if (prev == ' '&& senteance[i] != ' ')++num;
		prev = senteance[i];
	}
	cout << "单词个数：" << num << endl;*/

	int a;
	enum light{red=1,yello,green};
	cout << "请输入信号灯编号（1,2,3）：";
	cin >> a;
	switch (a)
	{
	case red :
		cout << "stop"; break;
	case yello:
		cout << "wait"; break;
	case green:
		cout << "go"; break;
	default:
		break;
	}

}

