//9������һ����Ա��Cperson���������ݳ�Ա����������š��Ա��������������ĳ�Ա�������ڴ˻�����������ѧ����CStudent(���ӳɼ�)
//����ʦ��Cteacher(���ӽ���)����ʵ�ֶ�ѧ���ͽ�ʦ��Ϣ�����������

#include <iostream> 
using namespace std;
#include <string>
class CPerson
{
	private:
		int id;
		string name;
		string sex;
	
	public:
		void set_id(int id)
		{
			this->id=id;
		}
		void set_name(string name)
		{
			this->name=name;
		}
		void set_sex(string sex)
		{
			this->sex=sex;
		}
		int get_id()
		{
			return id;
		}
		string get_name()
		{
			return name;
		}
		string get_sex()
		{
			return sex;
		}
};

class CStudent : public CPerson
{
	private:
		double score;
	public:
		void set_score(double score)
		{
			this->score=score;
		}
		int get_score()
		{
			return score;
		}
	
};

class Cteacher : public CPerson
{
	private:
		int year;
	public:
		void set_year(int year)
		{
			this->year=year;
		}
		int get_year()
		{
			return year;
		}
	
};

int main()
{
	CStudent stu;
	stu.set_id(1);
	stu.set_name("����");
	stu.set_score(100);
	stu.set_sex("��");
	
	Cteacher ct;
	ct.set_id(2);
	ct.set_name("����");
	ct.set_year(5);
	ct.set_sex("Ů");
	
	
	cout << stu.get_id() << " " << stu.get_name() << " " << stu.get_sex() << " " << stu.get_score() << endl;
	
	cout << ct.get_id() << " " << ct.get_name() << " " << ct.get_sex() << " " << ct.get_year();
	
	return 0;
}
