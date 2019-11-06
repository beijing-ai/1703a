#include <iostream>
#include <cstring>
using namespace std;
/*
定义一个人员类Cperson，包括数据成员：姓名、编号、性别和用于输入输出的成员函数。
在此基础上派生出学生类CStudent(增加成绩)
和老师类Cteacher(增加教龄)，并实现对学生和教师信息的输入输出。

*/

class Cperson{
	private:
		string name;
		int id;
		string sex;
	public:
		Cperson();
		~Cperson();
		void input(){
			cout << "姓名："; 
			getline(cin,name);
			cout << "编号：";
			cin >> id;
			cout << "性别：" ;
			cin >> sex; 
		} 
		
		void output(){
			cout << "信息为：" << endl;
			cout << "姓名：" << name << "\t";
			cout << "编号" << id << "\t";
			cout << "性别：" << sex ;
		}
};

class Cstudent:public Cperson{
	double score;
	
	public:
		void setInfor(){
			input();
			cout << "成绩：";
			cin >> score;
		}
		void getInfor(){
			output();
			cout << "成绩：" << score;
		}
		
};

class Cteacher:public Cperson{
	int teacherage;
	
	public:
		void setInf(){
			input();
			cout << "教龄：";
			cin >> teacherage; 
		} 
		void getInf(){
			output();
			cout << "教龄：" << teacherage;
		}
};
int main(){
	Cstudent stu;
	stu.setInfor();
	stu.getInfor();
	
	Cteacher tea;
	tea.setInf();
	tea.getInf();
	return 0; 
}
