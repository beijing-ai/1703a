// work02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

class Student 
{
	public:
		int num;
		float score;
	public:
		Student(int num,float score) 
		{
			this->num = num;
			this->score = score;
		}

		~Student() {
			cout << "销毁析构函数" << endl;
		}
};

void max_00(Student *s);
int main()
{
	//建立一个对象数组，内放 5 个学生的数据（学号、成绩），设立一个函数 max，
	//用指向对象的指针作函数参数，
	//在 max函数中找出 5 个学生中成绩最高者，并输出其 学号。初值自拟。
	Student stu[5] = {{1,33},{2,22},{3,11},{4,55},{5,44}};
	Student *s;
	s = stu;
	max_00(s);
}

void max_00(Student * s)
{
	float max = 0.0;
	for (int i=0;i<5;i++) 
	{
		if (s[i].score > max) 
		{
			max = s[i].score;
		}
	}
	cout << max << endl;
	for (int j=0;j<5;j++) 
	{
		if (s[j].score == max)
		{
			cout << s[j].num << endl;
		}
	}
}