//11：定义点类（Point），再定义一个函数（Distance）描述两点之间的距离，其数据成员为两个点类对象，将两点之间距离函数声明为
//Point类的友元函数。
#include <iostream>
using namespace std;
#include<math.h>

class Point
{
	private:
		double x;
		double y;
		
	public:
		Point(double x,double y)
		{
			this->x = x;
			this->y = y;
		}
		
		friend void Distance(Point p1,Point p2)
		{
			cout << sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
		}
		
		Point()
		{
			
		}
		
		~Point()
		{
			
		}
};

int main()
{
	Point p1(4,5),p2(7,9);
	Distance(p1,p2);
	
	return 0;
}
