#include <iostream>
#include <cstring>
using namespace std;
/*
����һ����Ա��Cperson���������ݳ�Ա����������š��Ա��������������ĳ�Ա������
�ڴ˻�����������ѧ����CStudent(���ӳɼ�)
����ʦ��Cteacher(���ӽ���)����ʵ�ֶ�ѧ���ͽ�ʦ��Ϣ�����������

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
			cout << "������"; 
			getline(cin,name);
			cout << "��ţ�";
			cin >> id;
			cout << "�Ա�" ;
			cin >> sex; 
		} 
		
		void output(){
			cout << "��ϢΪ��" << endl;
			cout << "������" << name << "\t";
			cout << "���" << id << "\t";
			cout << "�Ա�" << sex ;
		}
};

class Cstudent:public Cperson{
	double score;
	
	public:
		void setInfor(){
			input();
			cout << "�ɼ���";
			cin >> score;
		}
		void getInfor(){
			output();
			cout << "�ɼ���" << score;
		}
		
};

class Cteacher:public Cperson{
	int teacherage;
	
	public:
		void setInf(){
			input();
			cout << "���䣺";
			cin >> teacherage; 
		} 
		void getInf(){
			output();
			cout << "���䣺" << teacherage;
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
