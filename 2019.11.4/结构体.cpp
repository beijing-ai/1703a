# include <iostream>
//# include <fstream>
//# include <iomanip>
# include <cstring>
using namespace std;
//ĳ���¿��У�ÿ��С������4��ѧ����ɣ��ִ洢����һ��С��4��ѧ���������ͳɼ���Ȼ������һ��ѧ����������
//���Ҹ�ѧ���Ƿ�ΪС��ĳ�Ա���������ʾ��С���Ա��ͬʱ�����ѧ���ĳɼ������������ʾ����С���Ա��
//Ҫ�󣺽����ҵ���С���Ա��Ϣд�뵽E�����ļ�����Ϊstuscore��stu_inform.txt�ļ��У����û��E�̣�����д�ڱ�����У�
int main()
{
	//(2)	��ȷ������������飬ָ������� ��4�֣�
	int i;
	//(3)	��ȷ����ṹ�壨�������ѧ���������ͳɼ�(5��)
	struct Student
	{
		char name[20];
		float score;
	}stu[4];
//		struct Student stu[4];
	//(4)	����ṹ������洢һ��С���4��ѧ������Ϣ������ѭ����ֵ��7�֣�
	for(i=0;i<4;i++)
	{
		cin >> stu[i].name;
		cin >> stu[i].score;
	}
//(5)	�Ƚ�4��ѧ���ĳɼ�������ɼ���ߵ�ѧ����Ϣ(8��)
	int max;
	for(i=0;i<4;i++)
	{
		if (stu[i].score > stu[i+1].score)
		{
			max = stu[i].score;
		}
		else
		{
			max = stu[i+1].score;
		}
	}
	cout << "�ɼ����Ϊ" << max << "\n"; 
	
while(true)
{
	//(6)	��ʾ����Ҫ���ҵ�������4�֣�
	cout << "����Ҫ���ҵ�����";
	char name[10];
	cin >> name;
	//(7)	�ж��Ƿ��Ǹ�С��ĳ�Ա���������ȷ�Ľ�� ��7�֣�
	for(i=0;i<4;i++)
	{
		if (strcmp(name , stu[i].name)==0)
		{
			cout << "���ҵ�ͬѧΪС���Ա" << "\n";
			//(8)	���Ҫ���ҵ�ѧ���Ǹ�С��ѧ����Ҫ�󽫸�ѧ����Ϣд�뵽 E�����ļ�����Ϊ�ļ��У�8�֣�
			ofstream ofile;  //��������ļ�
			ofile.open("e:\\stuscore/stu_inform.txt");     //��Ϊ����ļ���
			ofile<<stu[i].score<<stu[i].name;   //д���ļ�
			ofile.close();
		}
	
	}
	//(9)	ѯ���Ƿ�������ң���������������˳�����2�֣�
	cout << "�Ƿ��������" << "\n";
	char b[10];
	cin >> b;
	if(strcmp(b , "n")==0)
	{
		break;
	}
	
}

}




