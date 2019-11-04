#include <iostream>
using namespace std;

//2、已知数组Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},编程实现数组元素的输入，然后输出这15个数，
//	编写冒泡排序算法的函数void BubbleSort(int *array,int m)，其中array为数组名，m为数组大小，
//	调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素。

void BubbleSort(int *array,int s)
{
	int m;
	for (int i=0;i<s;i++)
	{
		for (int j=1;j<s-i;j++)
		{
			if (array[j-1] > array[j])
			{
				m = array[j-1];
				array[j-1] = array[j];
				array[j] = m;
			}
		}
	}
}

int main()
{
	int s,i,Array[]={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14};
	s = sizeof(Array)/sizeof(int); 
	cout << "请输入15个数：\n";
	for (i=0;i<s;i++)
	{
		cin >> Array[i];
	} 
	cout << "\n原数组元素为：\n";
	for (i=0;i<s;i++)
	{
		cout << Array[i] << " ";
	}
	BubbleSort(Array,s);
	cout << "\n升序后的数组元素为：\n";
	for (i=0;i<s;i++)
	{
		cout << Array[i] << " ";
	}
	
}



