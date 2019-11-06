#include <iostream>
using namespace std;
#include <cstring>

class Shape
{
	protected:
		double a;
	public:
		Shape()
		{
			cout << "������aֵ��" << endl;
			cin >> a;
		}
};
class Circle:public Shape
{
	public:
		const int PI=3.14159;
		void printArea()
		{
			double area;
			area = PI*a*a;
			cout << "Բ��area��" << area << endl;
		}
	
};
class Rectangle:public Shape
{
	private:
		double b;
	public:
		Rectangle(double i)
		{
			b=i;
		}
		void printArea()
		{
			double area;
			area = a*b;
			cout << "����area��" << area << endl;
		}
	
};
class Trapezoid:public Shape
{
	private:
		double b,c;
	public:
		Trapezoid(double x,double y)
		{
			b=x;
			c=y;
		}
		void printArea()
		{
			double area;
			area = (a+b)*c*0.5;
			cout << "����area��" << area << endl;
		}
};
int main()
{
	Circle cc;
	cc.printArea();
	
	Rectangle rr(10);
	rr.printArea();
	
	Trapezoid tt(3,4);
	tt.printArea();
	
}




