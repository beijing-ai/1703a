//题目三：
//1.	题目描述：
//输编程实现如下功能：
//某次月考中，每个小组是由4名学生组成，现存储其中一个小组4名学生的姓名和成绩，然后输入一个学生的姓名，查找该学生是否为小组的成员，如果是提示是小组成员，同时输出该学生的成绩，如果不是提示不是小组成员。
//要求：将查找到的小组成员信息写入到E盘下文件夹名为stuscore的stu_inform.txt文件中（如果没有E盘，可以写在别的盘中）
//2.	案例完成思路要求（共55分）  
//(1)	画出规范流程图  （6分）
//(2)	正确定义变量，数组，指针变量等 （4分）
//(3)	正确定义结构体（用来存放学生的姓名和成绩)（5分)
//(4)	定义结构体变量存储一个小组的4个学生的信息，利用循环赋值   （7分）
//(5)	比较4个学生的成绩，输出成绩最高的学生信息  （8分)
//(6)	提示输入要查找的姓名（4分）
//(7)	判断是否是该小组的成员，并输出正确的结果 （7分）
//(8)	如果要查找的学生是该小组学生，要求将该学生信息写入到 E盘下文件夹名为stuscore的stu_inform.txt文件中（8分）
//(9)	询问是否继续查找，是则继续，否则退出程序（2分）
//(10)	加入注释  （4分) 

#include <iostream>
using namespace std;
#include <string.h>
#include <fstream>


struct Student{
	char name[10];
	double score;
};

int main()
{
	struct Student s[4];
	int max=0;
	int index;
	char name[10];
	int sf=1;
	ofstream ofile("e:\\stuscore\\stu_inform.txt");
	for(int i=0;i<4;i++)
	{
		cout << "请输入姓名:";
		cin >> s[i].name;
		cout << "请输入成绩:";
		cin >> s[i].score;
	}
	
	for(int i=0;i<4;i++)
	{
		if(max < s[i].score)
		{
			index = i;
			max = s[i].score;
		}
	}
	
	cout << "成绩最高的学生是:" << s[index].name << "," << s[index].score << endl;
	
	while(sf)
	{
		cout << "请输入要查询的学生姓名:";
		cin >> name;
		int j;
		for(j=0;j<4;j++)
		{
			if(strcmp(s[j].name,name)==0)
			{
				cout << name << "是小组成员"; 
				ofile << s[j].name << s[j].score << endl;
				cout << "\n"; 
				break;
			}
		}
		if(j==4)
		{
			cout << name << "不是小组成员" << endl;
		}
		cout << "是否继续查询？(1/0)";
		cin >> sf;
	}
	ofile.close();
	return 0;
}


