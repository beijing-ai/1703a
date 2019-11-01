# include <iostream>
using namespace std;
int main(){
	int i;
	int n;
	cin >> n;
	int num = 0;
	for(i = 0; ; i ++)
	{
		num = n % 10;
		n /= 10;
		cout << num;
		if(n < 1)
		{
			break;
		}
	

	}	
	return 0;
}
