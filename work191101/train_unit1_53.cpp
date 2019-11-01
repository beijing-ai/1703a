#include <iostream>
using namespace std;

int main()
{
	int i;
	float sum=0.0,avg=0,max=0,min=0,a[10],b[10];
	for (i=0;i<10;i++)
	{
		cout << "请输入第" << (i+1) << "名学生的成绩";
		cin >> a[i];
		sum+=a[i];
	}
	cout <<  "10名学生的成绩为：\n";
	for (i=0;i<10;i++)
	{
		cout << a[i] << " ";
		if (a[i]<a[i+1])
		{
			a[i+1] = a[i];
		}
		
	}
	avg = sum/10;
	cout << "\n10名学生总成绩为：" << sum <<"\n";
	cout << "10名学生平均成绩为：" << avg <<"\n";
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
//        cout <<"姓名"<<endl;
//        cin>>nameTemp.name;
//        cout <<"成绩"<<endl;
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
//        cout <<"姓名   "<<name[i].name<<endl;
// 
//        cout <<"成绩   "<<name[i].grade<<endl;
// 
//    }
//    cout <<"总成绩  "<<sum<<endl;
//    cout <<"平均成绩 "<<sum/5<<endl;
//    return 0;
//}

