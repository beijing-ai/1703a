// work03.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
void fun();

struct Student {
	char name[20];
	float score;
};
struct Student stu[4];

int main()
{
	/*某次月考中，每个小组是由4名学生组成，现存储其中一个小组4名学生的姓名和成绩，然后输入一个学生的姓名，
	查找该学生是否为小组的成员，如果是提示是小组成员，同时输出该学生的成绩，如果不是提示不是小组成员。
		(2)	正确定义变量，数组，指针变量等 （4分）
		(3)	正确定义结构体（用来存放学生的姓名和成绩)（5分)
		(4)	定义结构体变量存储一个小组的4个学生的信息，利用循环赋值   （7分）
		(5)	比较4个学生的成绩，输出成绩最高的学生信息  （8分)
		(6)	提示输入要查找的姓名（4分）
		(7)	判断是否是该小组的成员，并输出正确的结果 （7分）
		(9)	询问是否继续查找，是则继续，否则退出程序（2分）*/
	float max=0.0;
	int num;

	for (int i=0;i<4;i++) 
	{
		cin.getline(stu[i].name,20);
		cin >> stu[i].score;
	}
	for (int j=0;j<4;j++) 
	{
		if (stu[j].score > max) 
		{
			max = stu[j].score;
			num = j;
		}
	}
	cout << stu[num].name << stu[num].score << endl;

	cout << "=============" << endl;
	fun();
}

void fun() 
{
	char names[20], choise[5];
	int count = 0;
	while (1) 
	{
		cout << "请输入查找姓名";
		cin>>names;
		for (int x=0;x<4;x++) 
		{
			if (strcmp(stu[x].name,names)==0)
			{
				cout << stu[x].name << stu[x].score << endl;
			}
		}
		cout << "是否继续(y/n)";
		cin>>choise;
		if (strcmp(choise,"n")==0) 
		{
			break;
		}
	}
}