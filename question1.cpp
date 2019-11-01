//	有3个整数a,b,c，由键盘输入，输出其中最大的数
#include <iostream>
#
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	cout << max(max(a,b),c) << endl;
	return 0;
}; 
