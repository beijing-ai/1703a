#include <iostream>
using namespace std;
/*
����һ���������飬�ڷ� 5 ��ѧ�������� ��ѧ�š��ɼ�����
��ָ��ָ��������Ԫ�أ� ����� 1��3��5 ��ѧ�������ݡ���ֵ���⡣
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
			cout << "��1��3��5��ѧ��������Ϊ��" << endl;
			cout << "ѧ�ţ�" << stu[i].id << endl;
			cout << "�ɼ���" <<stu[i].score ; 
		}
	}
}


int main(){
	Student stu[5]={{1,78},{2,85},{3,92},{4,88},{5,86}};
	outputStu(stu)
	return 0;
}
