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
			cout << "������������" << endl;
			cin >> name;
			cout << "������ѧ�ţ�" << endl;
			cin >> id;
			cout << "�������Ա�" << endl;
			cin >> sex;	
		}
		
		void output(){
			cout << endl << "������" << name << endl;
			cout << "ѧ�ţ�" << id << endl;
			cout << "�Ա�" << sex << endl;
		}
	
};

class Student : public Person
{
	double score;
	
	public:
	void setinfor()
	{
		input();
		cout << "�ɼ���" ; 
		cin >> score;
	}
	
	void getinfor()
	{
		output();
		cout << "�ɼ���" << score;
	}
};

 
int main(int argc, char** argv) {
	Student s1;
	s1.setinfor();
	s1.getinfor();
	
	return 0;
}
