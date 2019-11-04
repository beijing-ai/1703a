// work02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

void fun(int a[5]);


int main()
{
	/*已知数组Array = { 3,8,9,4,5,6,7,2,1,0,11,12,13,15,14 }, 编程实现数组元素的输入，然后输出这15个数，
	编写冒泡排序算法的函数void BubbleSort(int *array, int m)，其中array为数组名，m为数组大小，
	调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素。
		(3)	正确输入数组元素（3分)
		(4)	正确输出数组元素（3分）
		(5)	正确编写冒泡排序算法函数，注意要求是升序排序（8分）
		(6)	正确调用冒泡排序算法函数（4分）
		(7)	输出重新排序后的数组元素（5分）*/
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "................" << endl;
	fun(a);
	for (int j = 0; j < 5; j++)
	{
		cout << a[j] << "\t";
	}

}

void fun(int a[5])
{
	int t;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i-1; j++)
		{
			if (a[j]>a[j+1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}