//��Ŀ����
//1.	��Ŀ������
//����ʵ�����¹��ܣ�
//ĳ���¿��У�ÿ��С������4��ѧ����ɣ��ִ洢����һ��С��4��ѧ���������ͳɼ���Ȼ������һ��ѧ�������������Ҹ�ѧ���Ƿ�ΪС��ĳ�Ա���������ʾ��С���Ա��ͬʱ�����ѧ���ĳɼ������������ʾ����С���Ա��
//Ҫ�󣺽����ҵ���С���Ա��Ϣд�뵽E�����ļ�����Ϊstuscore��stu_inform.txt�ļ��У����û��E�̣�����д�ڱ�����У�
//2.	�������˼·Ҫ�󣨹�55�֣�  
//(1)	�����淶����ͼ  ��6�֣�
//(2)	��ȷ������������飬ָ������� ��4�֣�
//(3)	��ȷ����ṹ�壨�������ѧ���������ͳɼ�)��5��)
//(4)	����ṹ������洢һ��С���4��ѧ������Ϣ������ѭ����ֵ   ��7�֣�
//(5)	�Ƚ�4��ѧ���ĳɼ�������ɼ���ߵ�ѧ����Ϣ  ��8��)
//(6)	��ʾ����Ҫ���ҵ�������4�֣�
//(7)	�ж��Ƿ��Ǹ�С��ĳ�Ա���������ȷ�Ľ�� ��7�֣�
//(8)	���Ҫ���ҵ�ѧ���Ǹ�С��ѧ����Ҫ�󽫸�ѧ����Ϣд�뵽 E�����ļ�����Ϊstuscore��stu_inform.txt�ļ��У�8�֣�
//(9)	ѯ���Ƿ�������ң���������������˳�����2�֣�
//(10)	����ע��  ��4��) 

#include <iostream>
using namespace std;
#include <string.h>
#include <fstream>


struct Student{
	char name[10];
	double score;
};

int main()
{
	struct Student s[4];
	int max=0;
	int index;
	char name[10];
	int sf=1;
	ofstream ofile("e:\\stuscore\\stu_inform.txt");
	for(int i=0;i<4;i++)
	{
		cout << "����������:";
		cin >> s[i].name;
		cout << "������ɼ�:";
		cin >> s[i].score;
	}
	
	for(int i=0;i<4;i++)
	{
		if(max < s[i].score)
		{
			index = i;
			max = s[i].score;
		}
	}
	
	cout << "�ɼ���ߵ�ѧ����:" << s[index].name << "," << s[index].score << endl;
	
	while(sf)
	{
		cout << "������Ҫ��ѯ��ѧ������:";
		cin >> name;
		int j;
		for(j=0;j<4;j++)
		{
			if(strcmp(s[j].name,name)==0)
			{
				cout << name << "��С���Ա"; 
				ofile << s[j].name << s[j].score << endl;
				cout << "\n"; 
				break;
			}
		}
		if(j==4)
		{
			cout << name << "����С���Ա" << endl;
		}
		cout << "�Ƿ������ѯ��(1/0)";
		cin >> sf;
	}
	ofile.close();
	return 0;
}


