# include <iostream>
//(1)	�������ͷ�ļ�(2��)
using namespace std;
//��֪����Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},���ʵ������Ԫ�ص����룬Ȼ�������15������
//��дð�������㷨�ĺ���void BubbleSort(int *array,int m)������arrayΪ��������mΪ�����С��
//����ð�������㷨����15���������������������������������Ԫ�ء� 
//(5)	��ȷ��дð�������㷨������ע��Ҫ������������8�֣�
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
	//(7)	�����������������Ԫ�أ�5�֣�
	for(i=0;i<10;i++)
	{
		cout << array[i] << "\t";
	}
}
int main()
{
	//(2)	��ʼ������������ ��2��)
	int array[10], i;
	//(3)	��ȷ��������Ԫ�أ�3��)
	for(i=0; i<10; i++)
	{
		cout << "����һ����";
		cin >> array[i];
	}
	//(4)	��ȷ�������Ԫ�أ�3�֣�
	for(i=0; i<10; i++)
	{
		cout << array[i] << "\t";
	}
	cout << "\n";
	//(6)	��ȷ����ð�������㷨������4�֣�
	BubbleSort(array, 10);
	return 0;
 } 
