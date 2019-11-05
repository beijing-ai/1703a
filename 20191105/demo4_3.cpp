#include <iostream>
using namespace std;
/*
建立一个对象数组，内放 5 个学生的数据 （学号、成绩），
用指针指向数组首元素， 输出第 1，3，5 个学生的数据。初值自拟。
*/
class Student{
	public:
		int number;
		int score;
	public:
		Student(int number,int score){
			this->number = number;
			this->score = score; 
		}
};
void outputStu(Student *stu){
	for(int i=0;i<5;i++){
		if(i % 2 == 0){
			cout << "第1、3、5个学生的数据为：" << endl;
			cout << "学号：" << stu[i].id << endl;
			cout << "成绩：" <<stu[i].score ; 
		}
	}
}


int main(){
	Student stu[5]={{1,78},{2,85},{3,92},{4,88},{5,86}};
	outputStu(stu)
	return 0;
}
