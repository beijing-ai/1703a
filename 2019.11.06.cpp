
#include <iostream>
using namespace std;

class Shape
{
	protected:
		int width, height;

	public:
		Shape(int a=0,int b=0)
		{
			width = a;
			height = b;
		}
		~Shape()
		{
		}

		int area() {
			cout << "Parent class area:" << endl;
			return 0;
		}
};


class Rectangle:public Shape
{
	public:
		Rectangle(int a = 0, int b = 0) :Shape(a, b)
		{
		};
		~Rectangle() 
		{
		};
		
		int area() 
		{
			cout << "Rectangle class area:" << endl;
			return (width * height);
		}
};

class Triangle :public Shape {
	public:
		Triangle(int a = 0, int b = 0) :Shape(a, b)
		{

		}

		int area() 
		{
			cout << "Triangle class area:" << endl;
			return (width * height / 2);
		}

};


int main()
{
	Rectangle r1(10, 5);
	cout <<"矩形的面积是：" << r1.area() << endl;

	Triangle t1(10, 6);
	cout << "三角形的面积是：" << t1.area();
}


