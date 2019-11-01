#include <iostream>
using namespace std;

int main(){
	//输入一个整数，将各位数字反转后输出。
	int i,a;
	cout << "请输入一个整数：";
	cin >> a;
	int num;
	for(i=0; ;i++)
	{
		num = a % 10;
		a /= 10;
		cout << num;
		if(a<1)
		{
			break;
		}
	}
	return 0;
} 
