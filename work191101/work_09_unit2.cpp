#include <iostream>
using namespace std;

int main()
{
	enum light {red=1,yellow,green};
	int a;
	cout << "������һ��������";
	cin >> a;
	switch (a)
	{
		case red:
			cout << "stop";
			break;
		case yellow:
			cout << "wait";
			break;
		case green:
			cout << "pass";
			break;
	}
}
