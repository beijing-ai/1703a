//鸡兔共有30只，脚共有90只，问鸡兔各有多少
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
				cout << "鸡:" << i << "兔:" << j;
				break;	
			}	
		} 
	}
};
