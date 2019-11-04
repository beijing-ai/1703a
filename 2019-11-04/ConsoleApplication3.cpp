// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

# include <iostream>
# include <fstream>
# include <iomanip>
# include <cstring>
#include "pch.h"
#include <iostream>
using namespace std;
int i;
struct Student
{
	char name[20];
	float score;
};
int main()
{
	struct Student s[4];
	for (i=0;i>4;i++) {
		cin >> s[i].name;
		cin >> s[i].score;
	}
	//比较4个学生的成绩，输出成绩最高的学生信息
	int max;
	for (i=0;i<4;i++) {
		if (s[i].score>s[i+1].score) {
			max = s[i].score;
		}
		else
		{
			max = s[i + 1].score;
		}
	}
	cout << "成绩最高:" << max << "\n";
	//(6)	提示输入要查找的姓名（4分）
	cout << "输入要查找的姓名";
	char name[10];
	cin >> name;
	while (true)
	{
		//(6)	提示输入要查找的姓名（4分）
		cout << "输入要查找的姓名";
		char name[10];
		cin >> name;
		//(7)	判断是否是该小组的成员，并输出正确的结果 （7分）
		for (i = 0; i < 4; i++)
		{
			if (strcmp(name, s[i].name) == 0)
			{
				cout << "查找的同学为小组成员" << "\n";
				//(8)	如果要查找的学生是该小组学生，要求将该学生信息写入到 E盘下文件夹名为文件中（8分）
				ofstream ofile;  //定义输出文件
				ofile.open("e:\\stuscore/stu_inform.txt");     //作为输出文件打开
				ofile << s[i].score << s[i].name;   //写入文件
				ofile.close();
			}

		}
		//(9)	询问是否继续查找，是则继续，否则退出程序（2分）
		cout << "是否继续查找" << "\n";
		char b[10];
		cin >> b;
		if (strcmp(b, "n") == 0)
		{
			break;
		}

	}
	return 0;
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
