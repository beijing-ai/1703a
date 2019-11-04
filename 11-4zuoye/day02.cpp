
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
void BubbleSort(int a[], int m);

struct Student
{
	string name[4];
	float score[4];
};
struct Student stu;
void student();
void find();

int main()
{
	/*int a[10];
	int b,i;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < 10; i++)
	{
		if (a[i] % 3 == 0 && a[i] % 5 == 0)
		{
			cout << a[i] << "\t" << i;
		}
	*/

	/*int Array[] = {3,8,9,4,5,6,7,2,1,0,11,12,13,15,14};
	int length = sizeof(Array) / sizeof(Array[0]);
	BubbleSort(Array, length);*/

	student();
}

//void BubbleSort(int a[], int m) {
//		int i, j,t;
//		for (i = 1; i < m; i++)
//		{
//			for (j = 1;j < m; j++)
//			{
//				if (a[j - 1] > a[j])
//				{
//					t = a[j - 1];
//					a[j - 1] = a[j];
//					a[j] = t;
//				}
//			}
//		}
//		for (i = 0; i < m; i++) {
//			cout << a[i] << '\t';
//		}
//	}

void student()
{
	int i, j;
	float max = 0;

	for (i = 0; i < 4; i++)
	{
		cout << "姓名：";
		cin >> stu.name[i];

		cout << endl << "成绩：";
		cin >> stu.score[i];
		cout << endl;
	}

	max = stu.score[0];
	for (i = 0; i < 4; i++)
	{
		if (stu.score[i] >= max)
		{
			j = i;
		}
	}
	cout << "成绩最高的学生为：" << stu.name[j] << "\t" << "成绩为：" << stu.score[j] << endl;

	find();
}

void find()
{
	int i;
	int input;
	string s;
	string name;
	cout << "请输入学生姓名：";
	cin >> name;
	int flag = 0;
	for (i = 0; i < 4; i++)
	{
		if (stu.name[i] == name)
		{
			flag = 1;
			ofstream out("output.txt");
			out << "学生姓名：" << stu.name[i] << "\t" << "学生成绩：" << stu.score[i];

			out.close();
			
		}
	}

	if (flag == 0)
	{
		cout << "该学生不存在，是否继续查找：(1 or 0)";
		cin >> input;
		if (input == 1)
		{
			find();
		}
		else
		{
			cout << "退出";
			exit(0);
		}
	}
}
	




