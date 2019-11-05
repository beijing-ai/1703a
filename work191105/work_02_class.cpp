#include <iostream>
using namespace std;
#include <string.h>

//2、建立一个对象数组，内放 5 个学生的数据（学号、成绩），
//设立一个函数 max，用指向对象的指针作函数参数，
//在max函数中找出5个学生中成绩最高者，并输出其学号。初值自拟。

class Stu
{
//	char Name[20];
	int Num;
	float Score;
	public:
		void SetInfo(float b,float c)
		{
//			strcpy(Name,a);
			Num = b;
			Score = c;
		}
		void GetInfo(int *p2,float *p3)
		{
//			*p1 = Name;
			*p2 = Num;
			*p3 = Score;
		}
		float max(Stu p)
		{
			int i;
			float max;
			for (i=0;i<5;i++)
			{
				if (p[i].Score>p[i+1].Score)
				{
					max = p[0].Score;
				}	
			}
			return max;
		}
};

int main()
{
	Stu stu[5];
	Stu *p;
	p = stu;
	int i;
	stu[0].SetInfo(2019,89);
	stu[1].SetInfo(2018,70);
	stu[2].SetInfo(2017,79);
	stu[3].SetInfo(2021,77);
	stu[4].SetInfo(2020,87);
	
	float ss;
	ss = max(stu);
	for (i=0;i<5;i++)
	{
//		char x;
		int y;
		float z;
		p->GetInfo(&y,&z);
		p++;
		if (z==ss)
		{
			cout << "num:" << y << "score:" << z << endl;
		}
	}
	
	
}






 
