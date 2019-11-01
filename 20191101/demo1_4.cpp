#include <iostream>
using namespace std;

int main(){
	//输入一个整数，求出它的所有因子
	int i,a;
	cout << "请输入一个整数：";
	cin >> a;
	for(i=1;i<=a;i++)
	{
		if(a%i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
