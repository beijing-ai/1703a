# include <iostream>
//(1)	导入相关头文件(2分)
using namespace std;
//已知数组Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},编程实现数组元素的输入，然后输出这15个数，
//编写冒泡排序算法的函数void BubbleSort(int *array,int m)，其中array为数组名，m为数组大小，
//调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素。 
//(5)	正确编写冒泡排序算法函数，注意要求是升序排序（8分）
void BubbleSort(int array[10], int m)
{
	int i;
	for(i=0;i<m-1;i++)
	{
		for(int j=0;j<m-i-1;j++)
		{
			if (array[j] > array[j+1])
			{
				int t;
				t = array[j];
				array[j] = array[j+1];
				array[j+1] = t;
//				swap(array[j], array[j+1]);
			 } 
		}
	}
	//(7)	输出重新排序后的数组元素（5分）
	for(i=0;i<10;i++)
	{
		cout << array[i] << "\t";
	}
}
int main()
{
	//(2)	初始化变量和数组 （2分)
	int array[10], i;
	//(3)	正确输入数组元素（3分)
	for(i=0; i<10; i++)
	{
		cout << "输入一个数";
		cin >> array[i];
	}
	//(4)	正确输出数组元素（3分）
	for(i=0; i<10; i++)
	{
		cout << array[i] << "\t";
	}
	cout << "\n";
	//(6)	正确调用冒泡排序算法函数（4分）
	BubbleSort(array, 10);
	return 0;
 } 
