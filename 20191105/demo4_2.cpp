#include <iostream>
using namespace std;
/*
����һ���������飬�ڷ� 5 ��ѧ�������ݣ�ѧ�š��ɼ���������һ������ max���� ָ������ָ��������������
�� max�������ҳ� 5 ��ѧ���гɼ�����ߣ��������ѧ�š���ֵ���⡣
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
	cout << "��߳ɼ�Ϊ��" << stu[ind_max].score << "��ѧ��Ϊ��" << stu[ind_max].number;	
}

int main(){
	Student stu[5]={{1,78},{2,85},{3,92},{4,88},{5,86}};
	max(stu)
	return 0;
}
