#include <iostream>
using namespace std;
 
int main()
{
	int m, n;
	cout << "������һ����Ȼ��m:";
	cin>>m;
	cout << "������һ����Ȼ��n:";
	cin >> n;
	int i, max;
	for (i = 1; i <= m && i <= n; i++) {
	if (m%i == 0 && n%i == 0) {
		max = i;
	}
	}
	cout << "m��n��ͬ�����Լ��Ϊ";
	cout << max;
}
