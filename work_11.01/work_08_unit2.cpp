#include <iostream>
using namespace std;

int main()
{
	//8������һ�����֣�ͳ���ж��ٸ����ʡ����ʺ͵���֮���ÿո�ֿ���
	char aaa[80],prev = ' ';
	int i,num = 0;
	gets(aaa);
	for (i=0;aaa[i]!='\0';++i)
	{
		if (prev==' '&&aaa[i]!=' ')
		{
			++num;
		}
		prev = aaa[i];
	}	
	cout << "���ʸ�����" << num << endl;
	return 0; 
}


