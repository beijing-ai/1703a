#include <iostream>
using namespace std;

int main(){
	//������Ȼ��m , n�����Լ��
	int m,n;
	cout << "������һ����Ȼ����";
	cin >> m;
	cout << "��������һ����Ȼ����" ;
	cin >> n;
	int i;
	int max = 0;
	for(i = 1;i <= n; i++)
	{
		if(m%i == 0 && n%i == 0)
		{
			max = i;
		}
	}
	cout << "���Լ��Ϊ��";
	cout << max; 
	return 0;
}
