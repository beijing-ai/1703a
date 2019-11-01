#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

# define PI 3.1415926 

int print(){
	int m,n;
	int i,j;
	
	cout << "请输入*的行数：" << endl;
	cin >>m;
	cout << "请输入*的列数：" <<endl;
	cin >>n;
	
	for(i=0;i<m;i++){
		
		for(j=0;j<n;j++){
			cout << "*" ;
		}	
		cout << endl;
	}
	
}

int print_delta()
{
	int m;
	
	cout << "请输入*的行数：" << endl;
	cin >>m;
	
	for(int i=0;i<m;i++)       //控制输出的行数
	{
		for (int j=0;j<=i;j++)
		{
			cout<< "*";
		}
		cout<<endl;
	}
	
}

int main() {	
	int r;
	float L,S;
	r = 10;
	L = 2 * PI * r;
	S = PI * r * r;
	cout << L << endl << S <<endl;
	cout << "Hello world!" <<endl;
	
	print();
	print_delta();
	
	
	return 0;
}
