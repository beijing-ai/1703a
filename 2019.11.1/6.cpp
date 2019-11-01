# include <iostream>
using namespace std;
int main(){
	int i,j;
	bool flag; 
	for (i=2;i<101;i++){
		flag=true;
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{
				flag=false; 
			}
		}
	if (flag)
	{
		cout << i <<"\n";
	}
	}
	return 0;
	
}
