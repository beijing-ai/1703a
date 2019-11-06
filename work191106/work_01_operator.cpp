#include <iostream>
#include <iomanip>
using namespace std;
#include <cstring>

//5：有两个矩阵a和b，均为2行3列。求两个矩阵之和。重载运算符“+”，
//   使之能用于矩阵相加。如c=a+b。初值自拟。
class Array
{
	private:
		int arr[2][3];
	public:
		Array();
		friend Array operator+(Array a1,Array a2);
		void input();
		void show();
};
Array::Array()    //无参构造函数 初始化矩阵 
{
	int i,j;
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			arr[i][j]=0;		
		}
	} 
}
Array operator+(Array a1,Array a2)
{
	Array a3;
	int i,j;
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			a3.arr[i][j] = a1.arr[i][j]+a2.arr[i][j];
		}
	}
	return a3;
}
void Array::input()
{
	cout << "请输入矩阵的数值：" << endl;
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<3;j++)
		{
			cin >> arr[i][j];
		}	
	}
}
void Array::show()
{
	int i,j;
	cout << "结果为：" << endl;
	for (i=0;i<2;cout<<endl,i++)
	{
		for (j=0;j<3;cout<<setw(4)<<arr[i][j]<<" ",j++);
	}	
} 
int main()
{
	Array a,b,c;
	a.input();
	b.input();
	c = a+b;
	c.show();

	return 0;
}



