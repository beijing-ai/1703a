//����һ�����֣�ͳ���ж��ٸ����ʡ����ʺ͵���֮���ÿո�ֿ�
#include <iostream> 
using namespace std; 	
int main()
{
	char a[200];
	cin.getline(a,200);
	int i = 0,num = 0;
	while(a[i]!='\0')
	{
		if(a[i]!=' '&&a[i+1]==' ')
		{
			num += 1;
		}
		i += 1;
	}
	cout << (num+1);
	
	return 0;
};
