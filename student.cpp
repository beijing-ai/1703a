//把一个学生的信息（包括学号，姓名，性别，年龄，成绩）放在一个结构体变量中，然后输出这个学生的信息。
//1.  建立一个结构体类型，包括学生信息的各成员。
//2.  定义结构体变量，同时赋初值。
//3.  输出该结构体变量的各个成员。
#include <iostream> 
using namespace std;
struct Student{
	int id;
	char name[10];
	char sex[5];
	int age;
	double score;
};
int main()
{
	struct Student s = {1,"邢泽岳","男",20,100};		
	cout << s.id << endl;
	cout << s.name << endl;
	cout << s.sex << endl;
	cout << s.age << endl;
	cout << s.score << endl;
};
