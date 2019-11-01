#include <iostream>
using namespace std;

int main()
{
	//求1-100以内的素数(1不是素数)
	int i,j;
	bool flag;
	for(i=2;i<=100;i++)
	{
		flag = true;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag = false;
			}
		}
		if(flag)
		{
			cout << i << " ";
		}
	}
	return 0;
}
