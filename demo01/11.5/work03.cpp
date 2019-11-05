// work03.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	private:
		int num;
		float score;

	public:
		void set_data(int num, float score)
		{
			this->num = num;
			this->score = score;
		}
		void show_data() 
		{
			cout << num << "\t";
			cout << score << endl;
		}
};

int main()
{
    //建立一个对象数组，内放 5 个学生的数据 （学号、成绩），用指针指向数组首元素，
	//输出第 1，3，5 个学生的数据。初值自拟。
	Student stu[5];
	Student *ss;
	for (int i=0;i<5;i++) 
	{
		int a;
		float b;
		cin >> a;
		cin.sync();
		cin >> b;
		cin.sync();
		stu[i].set_data(a, b);
	}
	ss = stu;
	for (int j=0;j<5;j+=2) 
	{
		ss[j].show_data();
	}
}
