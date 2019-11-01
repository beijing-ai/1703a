// day01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iostream>
using namespace std;

int main()
{
	int i,j,k;
	
	for (i=0;i<4;i++) 
	{
		for (k=0;k<4-i;k++)
		{
			cout << " ";
	
		}
		for (j=0;j<7-2*(3-i);j++)
		{
			cout << "*";
		}
		
		cout<< "\n";
	}
	for (i=0;i<3;i++) 
	{
		for (k = 0; k < i+2; k++) 
		{
			cout << " ";
		}
		for (j = 0; j < 7 - 2 * (1+ i); j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
		 
}
