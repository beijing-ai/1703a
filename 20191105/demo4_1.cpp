#include <iostream>
using namespace std;
/*
可以定义点类（Point），再定义一个类（Distance）描述两点之间的距离，
其数据成员为两个点类对象，两点之间距离的计算可设计由构造函数来实现。
*/
class Point{
	private:
		int x;
		int y;
	public:
		Point(int x,int y){
			this->x = x;
			this->y = y;
		}
};

class Distance{
	private:
		Point p1;
		Point p2;
	public:
		Distance(Point::Point p1,Point::Point p2){
			d = sqrt((this->p2.x - this->p1.x)*(this->p2.x - this->p1.x) + (this->p2.y - this->p1.y)*(this->p2.y - this->p1.y));
			cout << "两点之间的距离为：" << d; 
		}
};


int main(){
	Point p1(3,5);
	Point p2(5,10);
	Distance dist(p1,p2);
	return 0;
}
