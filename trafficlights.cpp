//��ͨ�źŵ��к죬�ƣ���������ɫ������ö�ٺ�switchʵ�����¹��ܣ�
//          1�����ƣ�2����Ƶƣ�3�����̵�
//          ����1��� stop
//          ����2��� wait
//          ����3��� go

#include <iostream> 
using namespace std;
enum trafficlights {stop=1,wait=2,go=3} lights;
int main()
{
	int i;
	cin >> i;
	switch(i)
	{
		case (trafficlights)1: cout << "stop";break;
		case (trafficlights)2: cout << "wait";break;
		case (trafficlights)3: cout << "go";break;
	}	
};
