#include <iostream>
#include <fstream>
using namespace std;

//ĳ������У�ÿ��С������5��������ɣ�
//�ִ洢����һ��С��5�����˵�������
//���ţ����磺1001����н�ʣ�Ȼ������һ�����˵�������
//���Ҹù����Ƿ�ΪС��ĳ�Ա���������ʾ��С���Ա��
//ͬʱ����ù��˵Ĺ��ź�н�ʣ����������ʾ����С���Ա��
//Ҫ�󣺽����ҵ���С���Ա��Ϣ
//д�뵽E�����ļ�����Ϊstuscore��stu_inform.txt�ļ���
struct Worker{
    int num;
    float money;
};
int main(){
    Worker ws[5] = {{1,5000},{2,8000},{3,7000},{4,7000},{5,6000}};
    int num;

    ifstream inf;
    ofstream outf;
    string s;
    int i;
    inf.open("F://Repository//1703a//11-4-task//stuscore//in1.txt");
    outf.open("F://Repository//1703a//11-4-task//stuscore//ou1.txt");
    while (getline(inf,s)){
        outf << s << '\n';
    }
    string a;
    while (1){
        cout << "��������Ҫ���ҹ��ʵĹ��˹���:" << endl;
        cin >> num;
        for(i=0;i<5;i++){
            if(ws[i].num==num){
                outf << ws[i].num << "money:" << ws[i].money << '\n';
                cout << ws[i].num << "money:" << ws[i].money << endl;
            }
        }
        cout << "�Ƿ������ѯ:y/n" << endl;
        cin >> a;
        if(a=="n"){
            break;
        }else{
            continue;
        }
    }

    inf.close();
    outf.close();
}
