//��һ��ѧ������Ϣ������ѧ�ţ��������Ա����䣬�ɼ�������һ���ṹ������У�Ȼ��������ѧ������Ϣ��
//1.  ����һ���ṹ�����ͣ�����ѧ����Ϣ�ĸ���Ա��
//2.  ����ṹ�������ͬʱ����ֵ��
//3.  ����ýṹ������ĸ�����Ա��
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
	struct Student s = {1,"������","��",20,100};		
	cout << s.id << endl;
	cout << s.name << endl;
	cout << s.sex << endl;
	cout << s.age << endl;
	cout << s.score << endl;
};
