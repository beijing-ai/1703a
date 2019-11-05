#include <iostream>
using namespace std;
#include <cstring>
#include <math.h>

//1、可以定义点类（Point），再定义一个类（Distance）描述两点之间的距离，
//其数据成员为两个点类对象，两点之间距离的计算可设计由构造函数来实现。

class Point
{
	private:
		float x,y;
	public:		
		Point()
		{
			cout << "输入坐标：";
			cin >> x >> y;
			cout << "坐标：(" << x << "," << y << ")" << endl;
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
			cout << "距离为：" << p << endl;
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





 
