using namespace std;
#include <iostream>

int main()
{
	int i, j;
	cout << "/////////////////////4行7列矩阵/////////////////////\n";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 7; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "/////////////////////直角三角形/////////////////////\n";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2*i+1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "/////////////////////菱形/////////////////////\n";
	for (i = 0; i < 4; i++)
	{
		for (j = 3; j >  i; j--)
		{
			cout << " ";
		}
		for (j = 0; j < 2*i+1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			cout << " ";
		}
		for (j = 5; j > 2*i; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
