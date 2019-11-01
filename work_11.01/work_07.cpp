#include <iostream>
using namespace std;

int main()
{
	//7、鸡兔共有30只，脚共有90只，问鸡兔各有多少？
	int i,j;
	for (i=1;i<=30;i++)
	{
		for (j=1;j<=30;j++)
		{
			if ((i+j==30)&&(2*i+4*j)==90)
			{
				cout << "鸡有：" << i << "只，兔子有："  << j << "只\n"; 
			}
		}
	} 
}
