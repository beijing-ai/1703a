#include <iostream>
using namespace std;

int main()
{
	//7�����ù���30ֻ���Ź���90ֻ���ʼ��ø��ж��٣�
	int i,j;
	for (i=1;i<=30;i++)
	{
		for (j=1;j<=30;j++)
		{
			if ((i+j==30)&&(2*i+4*j)==90)
			{
				cout << "���У�" << i << "ֻ�������У�"  << j << "ֻ\n"; 
			}
		}
	} 
}
