//输入一个整数，将各位数字反转后输出
# include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	while(num!=0)
	{
		cout << (num%10);
		num /= 10; 
	}	
}; 
