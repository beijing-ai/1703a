# include <iostream>
using namespace std;
int main(){
	int i,j;
	for (i=0;i<100;i++){
		for (j=0;j<100;j++)
		{
			if (i+j==30)
			{
				if (2*i+4*j==90)
				{
					cout << "ผฆ" << i;
					cout << "อร" << j;
				}
			}
		}
	}
	return 0;
	
}
