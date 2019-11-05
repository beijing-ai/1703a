#include <iostream>
using namespace std;
/*
建立一个对象数组，内放 5 个学生的数据（学号、成绩），设立一个函数 max，用 指向对象的指针作函数参数，
在 max函数中找出 5 个学生中成绩最高者，并输出其学号。初值自拟。
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

void max(Student *stu){
	int ind_max;
	for(int i=0;i<5;i++){
		if(stu[i].score > stu[i+1].score){
			ind_max = i;
		}
		else{
			ind_max = i+1;
		}
	}
	cout << "最高成绩为：" << stu[ind_max].score << "，学号为：" << stu[ind_max].number;	
}

int main(){
	Student stu[5]={{1,78},{2,85},{3,92},{4,88},{5,86}};
	max(stu)
	return 0;
}
