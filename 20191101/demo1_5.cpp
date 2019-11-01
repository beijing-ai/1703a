#include <iostream>
using namespace std;

int main(){
	//求两自然数m , n的最大公约数
	int m,n;
	cout << "请输入一个自然数：";
	cin >> m;
	cout << "请再输入一个自然数：" ;
	cin >> n;
	int i;
	int max = 0;
	for(i = 1;i <= n; i++)
	{
		if(m%i == 0 && n%i == 0)
		{
			max = i;
		}
	}
	cout << "最大公约数为：";
	cout << max; 
	return 0;
}
