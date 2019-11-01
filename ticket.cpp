//有3个候选人，每个选民只能投票选一人，要求编写一个统计选票的程序，先后输入被选人的名字，最后输出各人得票结果。
//1.  定义结构体数组，包含3个元素，每个元素信息包括候选人姓名       和得票数。
//2.  循环输入被选人姓名，与结构体数组中姓名比较，若相同，对应票数加1。
//3.  输出得票结果。
#include <iostream>
#include <string.h> 
using namespace std;
struct Student{
	char name[10];
	int ticket;
};
int main()
{
	struct Student s[3] = {
		{"张三",0},
		{"李四",0},
		{"王五",0}
	};
	char name[10];
	
	do
	{
		cin.getline(name,10);
		if(strcmp(name,s[0].name)==0)
		{
			s[0].ticket +=1;
		}
		else if(strcmp(name,s[1].name)==0)
		{
			s[1].ticket +=1;
		}
		else if(strcmp(name,s[2].name)==0)
		{
			s[2].ticket +=1;
		}
	}while(strcmp(name,"s")==1);
	cout << s[0].name << "\t" << s[0].ticket << endl;
	cout << s[1].name << "\t" << s[1].ticket << endl;
	cout << s[2].name << "\t" << s[2].ticket << endl;
	return 0;
};
