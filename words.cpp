//输入一行文字，统计有多少个单词。单词和单词之间用空格分开
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
