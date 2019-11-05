
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

/*
可以定义点类（Point），再定义一个类（Distance）描述两点之间的距离，
其数据成员为两个点类对象，两点之间距离的计算可设计由构造函数来实现。
*/

class Point
{
	public:
		float x;
		float y;

		void set(float x,float y)
		{
			this->x = x;
			this->y = y;
		}
		
};
class Distance
{
	public:
		Distance(float x1, float y1, float x2, float y2)
		{
			cout << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		}
};

/*
	建立一个对象数组，内放 5 个学生的数据（学号、成绩），
	设立一个函数 max，用指向对象的指针作函数参数，
	在 max函数中找出 5 个学生中成绩最高者，并输出其 学号。初值自拟。
*/

class student
{
	public:	
		string name;
		float score;

		student(string n, float s) :name(n), score(s) {};
		
};
void max(student *p)
{
	int i,max=0;
	for (i = 0; i < 5; i++) {
		if (p[i].score > max) {
			max = p[i].score;
		}
	}
	cout <<p[i].name << max;
}

/*建立一个对象数组，内放 5 个学生的数据 （学号、成绩），
用指针指向数组首元素， 输出第 1，3，5 个学生的数据。初值自拟。*/

//class Student
//{
//public:
//	int id;
//	float score;
//}stu[5] = { {1,90},{2,50},{3,60},{4,78},{5,98} };

//void max(Student *stu) {
//	int i;
//	for (i = 0; i < 5; i++) {
//		if (i % 2 == 0) {
//			cout << "1,3,5 学生数据：" << endl;
//			cout << "学号：" << stu[i].id << endl;
//			cout << "成绩：" << stu[i].score << endl;
//		}
//		
//	}
//}

int main()
{
	/*Point p1,p2;
	p1.set(3, 2);
	p2.set(5, 3);
	
	Distance d(p1.x,p1.y,p2.x,p2.y);*/

	student s[5] = {
		student("zs",100),
		student("ls",10),
		student("ww",60),
		student("zl",70),
		student("jb",80)
	};
	student *p = s;
	max(p);

	/*max(stu);*/
}
