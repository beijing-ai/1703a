#include <iostream>
using namespace std;

//两个数交换位置 
void fun(int *a,int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;	
}




//两个数交换位置 
void fun1(int &a,int &b)
{
	int t;
	t = a;
	a = b;
	b = t;	
}




//输入1-1000之内的10个整数到一个长度为10的数组，判断数组中的元素是否能同时被3和5整除，若能同时整除，则输出该整数
void fun2()
{
	int a[10];
	int i;
	for (i=0;i<10;i++)
	{
		cout << "请输入1-1000之内的10个整数:"; 
		cin >> a[i];
		if (a[i] % 3 ==0 && a[i] % 5 ==0)
		{
			cout << a[i] << "," << i << endl;
		}
	}
	
} 




//已知数组Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},编程实现数组元素的输入，然后输出这15个数，
//编写冒泡排序算法的函数void BubbleSort(int *array,int m)，其中array为数组名，m为数组大小，
//调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素。 
void BubbleSort(int array[10],int m)
{
	int i;
	for(i=0;i<m-1;i++)
	{
		for(int j=0;j<m-i-1;j++)
		{
			if (array[j] > array[j+1])
			{
				int t ;
				t = array[j];
				array[j] = array[j+1];
				array[j+1] = t;
			}
		}
	}
	
	//(7)	输出重新排序后的数组元素（5分）
	for(i=0;i<10;i++)
	{
		cout << array[i] << "\t";
	}
	
}



int main() {
	int a,b;
	cin >> a >> b;
	fun(&a,&b);
	cout << a << "," << b << endl;
	fun2();	
	
	//(2)	初始化变量和数组 （2分)
	int array[10], i;
	for(i=0;i<10;i++)
	{
		cout << "请输入一个数：";
		cin >> array[i] ;
	}
	
	for (i=0;i<10;i++)
	{
		cout << array[i] << "\t";
	}
	
	cout << endl;
	BubbleSort(array,10);
	
	return 0;
}
