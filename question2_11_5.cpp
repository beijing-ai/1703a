# include <iostream>
using namespace std;

struct Student
{
	int id;
	float score;

};


void max(Student *stu)
{
	int a;

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
	cout << "成绩最高者学号为:" << stu[a].id << endl;
	
	cout << "1，3，5 个学生的数据为:" << endl;
	for(int i=0;i<5;i++)
	{
		if(i % 2 == 0)
		{
			cout << stu[i].id << " " <<stu[i].score << endl;
		}
	}
}
int main()
{
	struct Student stu[5]={{1, 90},{2, 80}, {3, 95}, {4, 98}, {5, 100}}; 
	max(stu);


return 0;
}



