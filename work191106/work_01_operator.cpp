#include <iostream>
#include <iomanip>
using namespace std;
#include <cstring>

//5������������a��b����Ϊ2��3�С�����������֮�͡������������+����
//   ʹ֮�����ھ�����ӡ���c=a+b����ֵ���⡣
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
Array::Array()    //�޲ι��캯�� ��ʼ������ 
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
	cout << "������������ֵ��" << endl;
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
	cout << "���Ϊ��" << endl;
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



