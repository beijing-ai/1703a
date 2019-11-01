#include <iostream>
using namespace std;
 
int main()
{
	int m, n;
	cout << "请输入一个自然数m:";
	cin>>m;
	cout << "请输入一个自然数n:";
	cin >> n;
	int i, max;
	for (i = 1; i <= m && i <= n; i++) {
	if (m%i == 0 && n%i == 0) {
		max = i;
	}
	}
	cout << "m与n共同的最大公约数为";
	cout << max;
}
