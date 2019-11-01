#include <iostream> 
using namespace std;

int main()
{
	//求自然数1~10之和
	int i = 1;
	int sum = 0;
	for(i = 1;i <= 10;i++)
	{
		sum += i;
	}
	cout << sum;
	return 0;
}
