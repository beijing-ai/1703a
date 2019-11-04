// day02_2019_11_04_test3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include <string>

int main()
{
	int i;
	struct Student
	{
		char name[66];
		float score;
	}stu[4];
	struct Student stu[4];
	for (i = 0; i < 4; i++)
	{
		cin >> stu[i].name;
		cin >> stu[i].score;
	}
	int max;
	for (i = 0; i < 4; i++)
	{
		if (stu[i].score > stu[i + 1].score)
		{
			max = stu[i].score;
		}
		else
		{
			max = stu[i + 1].score;
		}
	}
	cout << "成绩最高为" << max << "\n";

	while (true)
	{
		//(6)	提示输入要查找的姓名（4分）
		cout << "输入要查找的姓名";
		char name[10];
		cin >> name;
		//(7)	判断是否是该小组的成员，并输出正确的结果 （7分）
		for (i = 0; i < 4; i++)
		{
			if (strcmp(name, stu[i].name) == 0)
			{
				cout << "查找的同学为小组成员" << "\n";
				
				ofstream ofile;  
				ofile.open("e:\\stuscore/stu_inform.txt");  
				ofile << stu[i].score << stu[i].name;  
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
}


