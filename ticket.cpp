//��3����ѡ�ˣ�ÿ��ѡ��ֻ��ͶƱѡһ�ˣ�Ҫ���дһ��ͳ��ѡƱ�ĳ����Ⱥ����뱻ѡ�˵����֣����������˵�Ʊ�����
//1.  ����ṹ�����飬����3��Ԫ�أ�ÿ��Ԫ����Ϣ������ѡ������       �͵�Ʊ����
//2.  ѭ�����뱻ѡ����������ṹ�������������Ƚϣ�����ͬ����ӦƱ����1��
//3.  �����Ʊ�����
#include <iostream>
#include <string.h> 
using namespace std;
struct Student{
	char name[10];
	int ticket;
};
int main()
{
	struct Student s[3] = {
		{"����",0},
		{"����",0},
		{"����",0}
	};
	char name[10];
	
	do
	{
		cin.getline(name,10);
		if(strcmp(name,s[0].name)==0)
		{
			s[0].ticket +=1;
		}
		else if(strcmp(name,s[1].name)==0)
		{
			s[1].ticket +=1;
		}
		else if(strcmp(name,s[2].name)==0)
		{
			s[2].ticket +=1;
		}
	}while(strcmp(name,"s")==1);
	cout << s[0].name << "\t" << s[0].ticket << endl;
	cout << s[1].name << "\t" << s[1].ticket << endl;
	cout << s[2].name << "\t" << s[2].ticket << endl;
	return 0;
};
