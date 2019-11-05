#include <iostream>
using namespace std;
#include <string.h>

struct Student
{
	int id;
	float score;
	
}stu[5] = {{1,90},{2,89},{3,90},{4,85}};

void max(Student *stu)
{
	int a;
	for (int i=0;i<4;i++)
	{
		if (stu[i].score>stu[i+1].score)
		{
			a = i;
		}
		else
		{
			a = i+1;
		} 
	}
	cout << "成绩最高者的学号为：" << stu[a].id << endl;
}

int main()
{
	max(stu);
}





