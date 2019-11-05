# include <iostream>
using namespace std;

//建立一个对象数组，内放 5 个学生的数据（学号、成绩）
struct Student
{
	int id;
	float score;
//	初值自拟
}stu[5]={{1, 90},{2, 80}, {3, 95}, {4, 98}, {5, 100}};

//设立一个函数 max，用 指向对象的指针作函数参数
void max(Student *stu)
{
	int a;
	//在 max函数中找出 5 个学生中成绩最高者，并输出其学号
	for(int i=0;i<4;i++)
	{
		if (stu[i].score > stu[i+1].score)
		{
			a = i;	
		}	
		else
		{
			a = i+1;
		}
	}
	cout << "成绩最高者学号" << stu[a].id << endl;
//输出第 1，3，5 个学生的数据
	for(int i=0;i<5;i++)
	{
		if(i % 2 == 0)
		{
			cout << "1，3，5 个学生的数据" << endl;
			cout << "学号为" << stu[i].id << endl;
			cout << "成绩为" <<stu[i].score << endl;
		}
	}
}
int main()
{
	max(stu);
//for (int i=0;i<5;i++)
//{
//	cout << stu[i].id << endl;
//	cout << stu[i].score << endl;
//}

return 0;
}



