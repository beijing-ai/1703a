//	��3������a,b,c���ɼ������룬�������������
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
