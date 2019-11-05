// day03_2019_11_05.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
	float x;
	float y;
public:
	Point(float x, float y) {
		this->x = x;
		this->y = y;
		cout << "这是一个构造函数\n";
	}
	~Point()
	{
		cout << "这是一个析构函数\n";
	}
	float setX();
	float setY();
	
};
float Point :: setX() {
	cin >> x;
	return x;
}
float Point :: setY() {
	cin >> y;
	return y;
}

class Distance
{
private:
	float dis;
	float x1, y1, x2, y2;
public:
	void getDistance() {
		Point p1(1.0, 3.0);
		Point p2(2.0, 3.0);
		x1 = p1.setX();
		y1 = p1.setY();
		x2 = p2.setX();
		y2 = p2.setY();
		dis = sqrt((double)(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
		cout << "两点之间的距离为：" << dis;
	}
};

int main()
{
	Distance d;
	d.getDistance();
	
	
}

