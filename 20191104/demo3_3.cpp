#include <iostream>
using namespace std;

/*
ĳ���¿��У�ÿ��С������4��ѧ����ɣ��ִ洢����һ��С��4��ѧ���������ͳɼ���
Ȼ������һ��ѧ�������������Ҹ�ѧ���Ƿ�ΪС��ĳ�Ա���������ʾ��С���Ա��
ͬʱ�����ѧ���ĳɼ������������ʾ����С���Ա��
Ҫ�󣺽����ҵ���С���Ա��Ϣд�뵽E�����ļ�����Ϊstuscore��stu_inform.txt�ļ��У����û��E�̣�����д�ڱ�����У�
2.	�������˼·Ҫ�󣨹�55�֣�  
(1)	�����淶����ͼ  ��6�֣�
(2)	��ȷ������������飬ָ������� ��4�֣�
(3)	��ȷ����ṹ�壨�������ѧ���������ͳɼ�)��5��)
(4)	����ṹ������洢һ��С���4��ѧ������Ϣ������ѭ����ֵ   ��7�֣�
(5)	�Ƚ�4��ѧ���ĳɼ�������ɼ���ߵ�ѧ����Ϣ  ��8��)
(6)	��ʾ����Ҫ���ҵ�������4�֣�
(7)	�ж��Ƿ��Ǹ�С��ĳ�Ա���������ȷ�Ľ�� ��7�֣�
(8)	���Ҫ���ҵ�ѧ���Ǹ�С��ѧ����Ҫ�󽫸�ѧ����Ϣд�뵽 E�����ļ�����Ϊstuscore��stu_inform.txt�ļ��У�8�֣�
(9)	ѯ���Ƿ�������ң���������������˳�����2�֣�
(10)	����ע��  ��4��)   
*/

struct Student{
	char name[20];
	float score;
};
//����ṹ������洢һ��С���4��ѧ������Ϣ������ѭ����ֵ
void createStu(struct Student){
	struct Student stu[4];
	for(int i=0;i<4;i++){
		cout << "�����" << i+1 << "λѧ�������֣�" << endl;
		cin >> stu[i].name ;
		cout << "�����" << i+1 << "λѧ���ĳɼ���" << endl;
		cin >> stu[i].score; 
	} 
	for(int j=0;j<4;j++){
		cout << stu[j].name << " ";
		cout << stu[j].score << " ";
	} 
}
//�Ƚ�4��ѧ���ĳɼ�������ɼ���ߵ�ѧ����Ϣ
void maxScore(stu[4]){
	int max;
	for(int i=0;i<4;i++)
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
	for(int j=0;j<4;j++){
		if(stu[j].score == max){
			cout << "�ɼ����Ϊ:" << stu[j].name << "ͬѧ��" << stu[j].score << "�֡�" << endl; 
		}
	}
}
//(6)	��ʾ����Ҫ���ҵ�������4�֣�
void searchStu(stu[4]){
	char name[20];
	cout << "������Ҫ���ҵ�������";
	cin >> name; 
	for(i=0;i<4;i++){
		if (strcmp(name,stu[i].name) ==0 ){
			cout << "���ҵ�ͬѧΪС���Ա" << endl;
			//(8)	���Ҫ���ҵ�ѧ���Ǹ�С��ѧ����Ҫ�󽫸�ѧ����Ϣд�뵽 E�����ļ�����Ϊ�ļ��У�8�֣�
			ofstream ofile;  
			ofile.open("e:\\stuscore\stu_inform.txt");    
			ofile<<stu[i].score<<stu[i].name;   
			ofile.close();
		}
	}
	char b[10];
	cout << "�Ƿ��������(y/n)" << endl;
	cin >> b;
	if(strcmp(b , "n")==0)
	{
		break;
	}
}

int main(){
	struct Student stu[4];
	createStu(stu[4]);
	maxScore(stu[4]);
	searchStu(stu[4]);
	return 0;
}
