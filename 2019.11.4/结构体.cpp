# include <iostream>
//# include <fstream>
//# include <iomanip>
# include <cstring>
using namespace std;
//某次月考中，每个小组是由4名学生组成，现存储其中一个小组4名学生的姓名和成绩，然后输入一个学生的姓名，
//查找该学生是否为小组的成员，如果是提示是小组成员，同时输出该学生的成绩，如果不是提示不是小组成员。
//要求：将查找到的小组成员信息写入到E盘下文件夹名为stuscore的stu_inform.txt文件中（如果没有E盘，可以写在别的盘中）
int main()
{
	//(2)	正确定义变量，数组，指针变量等 （4分）
	int i;
	//(3)	正确定义结构体（用来存放学生的姓名和成绩(5分)
	struct Student
	{
		char name[20];
		float score;
	}stu[4];
//		struct Student stu[4];
	//(4)	定义结构体变量存储一个小组的4个学生的信息，利用循环赋值（7分）
	for(i=0;i<4;i++)
	{
		cin >> stu[i].name;
		cin >> stu[i].score;
	}
//(5)	比较4个学生的成绩，输出成绩最高的学生信息(8分)
	int max;
	for(i=0;i<4;i++)
	{
		if (stu[i].score > stu[i+1].score)
		{
			max = stu[i].score;
		}
		else
		{
			max = stu[i+1].score;
		}
	}
	cout << "成绩最高为" << max << "\n"; 
	
while(true)
{
	//(6)	提示输入要查找的姓名（4分）
	cout << "输入要查找的姓名";
	char name[10];
	cin >> name;
	//(7)	判断是否是该小组的成员，并输出正确的结果 （7分）
	for(i=0;i<4;i++)
	{
		if (strcmp(name , stu[i].name)==0)
		{
			cout << "查找的同学为小组成员" << "\n";
			//(8)	如果要查找的学生是该小组学生，要求将该学生信息写入到 E盘下文件夹名为文件中（8分）
			ofstream ofile;  //定义输出文件
			ofile.open("e:\\stuscore/stu_inform.txt");     //作为输出文件打开
			ofile<<stu[i].score<<stu[i].name;   //写入文件
			ofile.close();
		}
	
	}
	//(9)	询问是否继续查找，是则继续，否则退出程序（2分）
	cout << "是否继续查找" << "\n";
	char b[10];
	cin >> b;
	if(strcmp(b , "n")==0)
	{
		break;
	}
	
}

}




