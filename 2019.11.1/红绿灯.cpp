# include <iostream>
using namespace std;

int main()
{
	enum l{red=1, yellow=2,green=3
	};
	int a;
	cin >> a;
	switch(a)
	{
		case red:
			cout << "stop";
			break;
		case yellow:
			cout << "wait";
			break;
		case green:
			cout << `go`; 
			break;
		default:
			cout << "ÊäÈëÓÐÎó!";
	}
	return 1;
}
