// day02_2019_11_04_test2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void bubbleSort(int* array, int i);

int main()
{
	/*程序加入注释 （3分）*/
	/*(2)	代码实现：*/
	//(1)	导入相关头文件(2分)
		//(2)	初始化变量和数组 （2分)
	int arr[15];
	int i;
		//(3)	正确输入数组元素（3分)
	for (i=0;i<15;i++)
	{
		cout << "请输入第" << (i + 1) << "个数:" << "\n";
		cin >> arr[i];

	}
	for (i=0; i<15; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";
	//(6)	正确调用冒泡排序算法函数（4分）
	bubbleSort(arr,i);
}
void bubbleSort(int* arr, int i) 
{
	int t;
	int j;
	//(5)	正确编写冒泡排序算法函数，注意要求是升序排序（8分）
	for (i = 1; i < 15; i++)
	{
		for (j = 1; j <= 15 - i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				t = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = t;
			}
		}
	}
	//(7)	输出重新排序后的数组元素（5分）
	for (i = 0; i < 15; i++)
	{
		cout << arr[i] << "\t";
	}
}


