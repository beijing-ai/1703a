//8：写一个程序，定义抽象类型Shape，由他派生三个类：Circle（圆形），Rectangle（矩形），Trapezoid（梯形），
//用一个函数printArea分别输出三者的面积，3个图形的数据在定义对象是给定。

#include <iostream>
using namespace std;

class Shape{
	public:
		void virtual printArea() =0;
};

class Rectangle : public Shape{
	private:
		double l;
		double w;
	public:
		Rectangle(double l,double w)
		{
			this->l = l;
			this->w = w;
		}
		~Rectangle()
		{
			
		}
		void printArea()
		{
			cout << l*w << endl;
		}
};

class Trapezoid : public Shape{
	private:
		double u;
		double d;
		double h;
	public:
		Trapezoid(double u,double d,double h)
		{
			this->u = u;
			this->d = d;
			this->h = h;
		}
		~Trapezoid()
		{
			
		}
		void printArea()
		{
			cout << (u+d)*h/2 << endl;
		}
};

class Circle : public Shape{
	private:
		double r;
	public:
		Circle(double r)
		{
			this->r = r;
		}
		~Circle()
		{
			
		}
		void printArea()
		{
			cout << 3.14*r*r << endl;
		}
};

int main()
{
	Circle c(2);
	c.printArea();
	Trapezoid tr(2,4,6);
	tr.printArea();
	Rectangle r(4,5);
	r.printArea();
	
	return 0;
}
