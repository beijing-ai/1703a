#include <iostream>
using namespace std;
#include <string.h>

//2、求自然数1~10之和 

int main()
{
	int i;
	int sum=0;
	
	for (i=1;i<=10;i++)
	{
		sum+=i;
	}
	cout << "1~10之和为："<<sum;
}
