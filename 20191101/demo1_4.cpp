#include <iostream>
using namespace std;

int main(){
	//����һ�����������������������
	int i,a;
	cout << "������һ��������";
	cin >> a;
	for(i=1;i<=a;i++)
	{
		if(a%i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
