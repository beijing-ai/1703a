#include <iostream>
using namespace std;
#include <cstring>

class Shape
{
	protected:
		double a;
	public:
		void Setinfo()
		{
			cout << "请输入a的值：" << endl;
			cin >> a;
		}
};
class Circle:public Shape
{
	public:
		const int PI=3.14159;
		void Setinfo1()
		{
			Setinfo();
		}
		void printArea()
		{
			double area;
			area = PI*a*a;
			cout << "圆的area：" << area << endl;
		}
	
};
class Rectangle:public Shape
{
	public:
		double b;
	public:
		Rectangle(double i)
		{
			Setinfo();
			b=i;
		}
		void printArea()
		{
			
			double area;
			area = a*b;
			cout << "矩形area：" << area << endl;
		}
	
};
class Trapezoid:public Shape
{
	public:
		double b,c;
	public:
		Trapezoid(double x,double y)
		{
			b=x;
			c=y;
		}
		void printArea()
		{
			Setinfo();
			double area;
			area = (a+b)*c*0.5;
			cout << "梯形area：" << area << endl;
		}
};
int main()
{
//	Circle cc;
//	cc.Setinfo1();
//	cc.printArea();
	
	Rectangle rr(10);
	rr.printArea();
//	
//	Trapezoid tt(3,4);
//	tt.printArea();
	
}




