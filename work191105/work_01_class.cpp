#include <iostream>
using namespace std;
#include <cstring>
#include <math.h>

//1�����Զ�����ࣨPoint�����ٶ���һ���ࣨDistance����������֮��ľ��룬
//�����ݳ�ԱΪ���������������֮�����ļ��������ɹ��캯����ʵ�֡�

class Point
{
	private:
		float x,y;
	public:		
		Point()
		{
			cout << "�������꣺";
			cin >> x >> y;
			cout << "���꣺(" << x << "," << y << ")" << endl;
		}
		void Getxy(float *px,float *py)
		{
			*px = x;
			*py = y;
		}
};

class Distance
{
	float d;
	public:
		Distance(float x1,float y1,float x2,float y2)
		{
			float p;
			p = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			cout << "����Ϊ��" << p << endl;
		}
};
int main()
{
	Point p1,p2;
	
	float a,b,c,d;
	p1.Getxy(&a,&b);
	p2.Getxy(&c,&d);
	
	Distance dis(a,b,c,d);
	return 0;
}





 
