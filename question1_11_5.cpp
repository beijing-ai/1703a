//可以定义点类（Point），再定义一个类（Distance）描述两点之间的距离，其数据成员为两个点类对象，两点之间距离的计算可设计
//由构造函数来实现。
#include <iostream>
using namespace std;
#include<math.h>

class Point
{
	public:
		double x;
		double y;
		
	public:
		Point(double x,double y)
		{
			this->x = x;
			this->y = y;
		}
		
		Point()
		{
			
		}
		
		~Point()
		{
			
		}
};

class Distance
{
	private:
		Point p1;
		Point p2;
	
	public:
		Distance(Point p1,Point p2)
		{
			this->p1 = p1;
			this->p2 = p2;
			cout << sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
		}
};

int main()
{
	Point p1(4,5),p2(7,9);
	Distance d(p1,p2);
	
	return 0;
}
