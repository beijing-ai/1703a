# include <iostream>
using namespace std;

int main()
{
	char m[10];
	int a=0,i;
//	��������ո� 
	cin.getline(m, 9);
	for(i=0;m[i]!='\0';i++)
	{
		if(m[i]==' ')
		{
			a++;
		}
	}
	cout << a+1;	
	return 1; 
} 
