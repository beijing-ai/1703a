# include <iostream>
using namespace std;

//����һ���������飬�ڷ� 5 ��ѧ�������ݣ�ѧ�š��ɼ���
struct Student
{
	int id;
	float score;
//	��ֵ����
}stu[5]={{1, 90},{2, 80}, {3, 95}, {4, 98}, {5, 100}};

//����һ������ max���� ָ������ָ������������
void max(Student *stu)
{
	int a;
	//�� max�������ҳ� 5 ��ѧ���гɼ�����ߣ��������ѧ��
	for(int i=0;i<4;i++)
	{
		if (stu[i].score > stu[i+1].score)
		{
			a = i;	
		}	
		else
		{
			a = i+1;
		}
	}
	cout << "�ɼ������ѧ��" << stu[a].id << endl;
//����� 1��3��5 ��ѧ��������
	for(int i=0;i<5;i++)
	{
		if(i % 2 == 0)
		{
			cout << "1��3��5 ��ѧ��������" << endl;
			cout << "ѧ��Ϊ" << stu[i].id << endl;
			cout << "�ɼ�Ϊ" <<stu[i].score << endl;
		}
	}
}
int main()
{
	max(stu);
//for (int i=0;i<5;i++)
//{
//	cout << stu[i].id << endl;
//	cout << stu[i].score << endl;
//}

return 0;
}



