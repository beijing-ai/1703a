#include <iostream>
#include <cstring> 
using namespace std;

class Person
{
	string name;
	int id;
	string sex;
	
	public:
		void input(){
			cout << "请输入姓名：" << endl;
			cin >> name;
			cout << "请输入学号：" << endl;
			cin >> id;
			cout << "请输入性别：" << endl;
			cin >> sex;	
		}
		
		void output(){
			cout << endl << "姓名：" << name << endl;
			cout << "学号：" << id << endl;
			cout << "性别：" << sex << endl;
		}
	
};

class Student : public Person
{
	double score;
	
	public:
	void setinfor()
	{
		input();
		cout << "成绩：" ; 
		cin >> score;
	}
	
	void getinfor()
	{
		output();
		cout << "成绩：" << score;
	}
};

 
int main(int argc, char** argv) {
	Student s1;
	s1.setinfor();
	s1.getinfor();
	
	return 0;
}
