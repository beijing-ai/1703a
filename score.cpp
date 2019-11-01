//输入10名学生的成绩
//输出10名学生的成绩
//输出总成绩
//输出平均成绩
//输出成绩最高的学生的成绩
//输出成绩最低的学生的成绩
//排序，输出从高到底的学生成绩
#include <iostream> 
using namespace std;

int main()
{
	double a[10];
	double sum,ave;
	double max=0.0,min=1000;
	int i;
	for(i=0;i<10;i++)
	{
		cout << "请输入:";
		cin >> a[i];
		sum += a[i];
		if(max<a[i])
		{
			max = a[i]; 
		}
		if(min>a[i])
		{
			min = a[i];
		}
	} 
	
	for(i=0;i<10;i++)
	{
		cout << "第" << (i+1) << "个人成绩:" << a[i] << endl;
	} 
	
	cout << "总成绩:" << sum << ",平均成绩:" << sum/10 << ",最高成绩:" << max << ",最低成绩:" << min << endl;
	
	for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10 - i - 1; j++)
        {
            if(a[j]<a[j+1])   
            {
                int temp;       
                temp = a[j];
                a[j] = a[j+1]; 
                a[j+1] = temp;   
            }
        }
    }
  
    for(int k = 0; k < 10; k++)
    {
    	cout << a[k] << "\t";
	}
        
	return 0;
};
