//���ù���30ֻ���Ź���90ֻ���ʼ��ø��ж���
#include <iostream> 
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<30;i++)
	{
		for(j=1;j<=30-i;j++)
		{
			if((i*2+j*4)==90&&i+j==30)
			{
				cout << "��:" << i << "��:" << j;
				break;	
			}	
		} 
	}
};
