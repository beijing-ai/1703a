#include <iostream>
using namespace std;

//1、输入1-1000之内的10个整数到一个长度为10的数组，判断数组中的元素
//是否能同时被3和5整除，若能同时整除，则输出该整数。案例完成思路要求：（共15分） 

int main()
{
	int i,a[10];
	
	cout << "请输入十个1-1000的整数：";
	for (i=0;i<10;i++)
	{
		cin >> a[i];
		if (a[i]<1 || a[i]>1000)
		{
			cout << "您输入的数不符合要求";
			break;
		}
		else
		{
			if (a[i]%3==0 && a[i]%5==0)
			{
				cout << "i=" << i << " , a[" << i <<"]=" << a[i] << "\n";
			}
		}
	}
	return 0;
}








