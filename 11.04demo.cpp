#include <iostream>
using namespace std;

//����������λ�� 
void fun(int *a,int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;	
}




//����������λ�� 
void fun1(int &a,int &b)
{
	int t;
	t = a;
	a = b;
	b = t;	
}




//����1-1000֮�ڵ�10��������һ������Ϊ10�����飬�ж������е�Ԫ���Ƿ���ͬʱ��3��5����������ͬʱ�����������������
void fun2()
{
	int a[10];
	int i;
	for (i=0;i<10;i++)
	{
		cout << "������1-1000֮�ڵ�10������:"; 
		cin >> a[i];
		if (a[i] % 3 ==0 && a[i] % 5 ==0)
		{
			cout << a[i] << "," << i << endl;
		}
	}
	
} 




//��֪����Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},���ʵ������Ԫ�ص����룬Ȼ�������15������
//��дð�������㷨�ĺ���void BubbleSort(int *array,int m)������arrayΪ��������mΪ�����С��
//����ð�������㷨����15���������������������������������Ԫ�ء� 
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
	
	//(7)	�����������������Ԫ�أ�5�֣�
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
	
	//(2)	��ʼ������������ ��2��)
	int array[10], i;
	for(i=0;i<10;i++)
	{
		cout << "������һ������";
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
