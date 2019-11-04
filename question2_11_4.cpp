//题目二：
//1.	题目描述：
//已知数组Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},编程实现数组元素的输入，然后输出这15个数，编写冒泡排序算法的函数void BubbleSort(int *array,int m)，其中array为数组名，m为数组大小，调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素。
//2   案例完成思路要求（共30分）  
//(1)	程序加入注释 （3分）
//(2)	代码实现：
//(1)	导入相关头文件(2分)
//(2)	初始化变量和数组 （2分)
//(3)	正确输入数组元素（3分)
//(4)	正确输出数组元素（3分）
//(5)	正确编写冒泡排序算法函数，注意要求是升序排序（8分）
//(6)	正确调用冒泡排序算法函数（4分）
//(7)	输出重新排序后的数组元素（5分）
#include <iostream>
using namespace std;
void fun(int a[],int len);
int main()
{
//	int a[15] = {3,8,9,4,5,6,7,2,1,0,11,12,13,15,14};
	int a[15];
	
	for(int i=0;i<15;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;i<15;i++)
	{
		cout << a[i] << "\t";
	}
	
	fun(a,sizeof(a)/sizeof(a[0]));
	cout << "\n";
	
	for(int i=0;i<15;i++)
	{
		cout << a[i] << "\t";
	}
	
	return 0;
}

void fun(int a[],int len)
{
	for(int i=1;i<len;i++)
	{
		for(int j=0;j<len-i;j++)
		{
			int t;
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;	
			}	
		}
	}
}
