#include <iostream>
using namespace std;

//2����֪����Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},���ʵ������Ԫ�ص����룬Ȼ�������15������
//	��дð�������㷨�ĺ���void BubbleSort(int *array,int m)������arrayΪ��������mΪ�����С��
//	����ð�������㷨����15���������������������������������Ԫ�ء�

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
	cout << "������15������\n";
	for (i=0;i<s;i++)
	{
		cin >> Array[i];
	} 
	cout << "\nԭ����Ԫ��Ϊ��\n";
	for (i=0;i<s;i++)
	{
		cout << Array[i] << " ";
	}
	BubbleSort(Array,s);
	cout << "\n����������Ԫ��Ϊ��\n";
	for (i=0;i<s;i++)
	{
		cout << Array[i] << " ";
	}
	
}



