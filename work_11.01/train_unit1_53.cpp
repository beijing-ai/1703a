#include <iostream>
using namespace std;

int main()
{
	int i;
	float sum=0.0,avg=0,max=0,min=0,a[10],b[10];
	for (i=0;i<10;i++)
	{
		cout << "�������" << (i+1) << "��ѧ���ĳɼ�";
		cin >> a[i];
		sum+=a[i];
	}
	cout <<  "10��ѧ���ĳɼ�Ϊ��\n";
	for (i=0;i<10;i++)
	{
		cout << a[i] << " ";
		if (a[i]<a[i+1])
		{
			a[i+1] = a[i];
		}
		
	}
	avg = sum/10;
	cout << "\n10��ѧ���ܳɼ�Ϊ��" << sum <<"\n";
	cout << "10��ѧ��ƽ���ɼ�Ϊ��" << avg <<"\n";
	cout << a[9];
	
	
}

//#include <iostream>
//#include<string>
//#include<vector>
//using namespace std;
//struct NameGrade
//{
//    string name;
//    float  grade;
//};
//int main()
//{
//    vector<NameGrade> name;
//    for (int i = 0;i <5;i++)
//    {  
//        NameGrade nameTemp;
//        cout <<"����"<<endl;
//        cin>>nameTemp.name;
//        cout <<"�ɼ�"<<endl;
//        cin>>nameTemp.grade;
//        name.push_back(nameTemp);
//    }
//    int sum(0);
//    float avenum(0.f);
//    for (int i = 0;i <5;i++)
//    {  
//        sum += name[i].grade;
//    }
//    avenum = sum/5;
//    NameGrade t;
//    for(int i=0;i<5;i++)
//    {
//        for(int j=0;j<5-i-1;j++)
//        {
//            if(name[j].grade<name[j+1].grade)
//            {
//                t=name[j];
//                name[j]=name[j+1];
//                name[j+1]=t;
//            }
//        }
//    }
//    for (int i = 0;i <5;i++)
//    {  
//        cout <<"����   "<<name[i].name<<endl;
// 
//        cout <<"�ɼ�   "<<name[i].grade<<endl;
// 
//    }
//    cout <<"�ܳɼ�  "<<sum<<endl;
//    cout <<"ƽ���ɼ� "<<sum/5<<endl;
//    return 0;
//}

