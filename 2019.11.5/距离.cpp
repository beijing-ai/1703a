# include <iostream>
# include <math.h>
using namespace std;

//���Զ�����ࣨPoint��
class Point
{
	int x, y;
	public:
		Point()
		{
			
		}
		~Point()
		{
			
		}
		int setx()
		{
			cin >> x;
			return x;
		}
		int sety()
		{
			cin >> y;
			return y;
		}

 }; 
// �ٶ���һ���ࣨDistance����������֮��ľ���
class Distance
{
	int y;
	public:
		Distance()
		{
			
		}
		~Distance()
		{
			
		}
		int set()
		{
			int x, y;
			Point p1, p2;
			x = pow(p1.setx() - p2.setx(), 2);
			y = pow(p1.sety() - p2.sety(), 2);
			return sqrt(x+y);
		}

 };
 
int main()
{
	Distance d;
	cout << d.set();
//	if(dis < 0)
//	{
//		dis = dis * -1;
//	}
//	cout << "����֮�����Ϊ" << dis; 
	return 0;
}
//�����ݳ�ԱΪ�����������
//����֮�����ļ��������ɹ��캯����ʵ�֡�
//pow  ƽ��
//abs  ����ֵ 
//sqrt  ���� 
