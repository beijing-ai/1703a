#include <iostream>
using namespace std;

int main(){
	//����һ������������λ���ַ�ת�������
	int i,a;
	cout << "������һ��������";
	cin >> a;
	int num;
	for(i=0; ;i++)
	{
		num = a % 10;
		a /= 10;
		cout << num;
		if(a<1)
		{
			break;
		}
	}
	return 0;
} 
