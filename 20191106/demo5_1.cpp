#include <iostream>
#include <cstring>
using namespace std;

/*
写一个程序，定义抽象类型Shape，由他派生三个类：Circle（圆形），Rectangle（矩形），Trapezoid（梯形），
用一个函数printArea分别输出三者的面积，3个图形的数据在定义对象是给定。
*/
class Shape{
	public:
		string shapename;
	public:
		void printArea(){
			if shapename.compare("圆形"){
				cout << shapename << "的面积为：" << ;
			} 
			
		}
};
Shape::Shape()
Shape::~Shape()

class Circle:public Shape{
	public:
		const double PI = 3.14159; 
		double radius;
	public:
		void cirArea(){
			cout << shapename << "的面积为：" <<  PI*(radius*radius);
		}
};
Circle::Circle()
Circle::~Circle()

class Rectangle:public Shape{
	public:
		double longth;
		double width;
	public:
		void recArea(){
			cout << shapename << "的面积为：" << longth*width;
		}
};
Rectangle::Rectangle()
Rectangle:~Rectangle()

class Trapezoid:public Shape{
	public:
		double uplongth;
		double downlongth;
		double height;
	public:
		void traArea(){
			cout << shapename << "的面积为：" << ((uplongth+downlongth)*height)/2;
		}		
};
Trapezoid::Trapezoid()
Trapezoid::~Trapezoid()

int main(){
	
	return 0;
}
