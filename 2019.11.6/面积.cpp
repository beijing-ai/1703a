# include <iostream>
using namespace std;

class Shape
{
	float lenght;
	public:
		float setl()
		{
			cout << "请输入图形的长" << endl;
			cin >> lenght;	
			return lenght;
		}
 };
// 8：写一个程序，定义抽象类型Shape，由他派生三个类：Circle（圆形），Rectangle（矩形），Trapezoid（梯形）
class Circle : public Shape
{
	public:
		double printArea()
		{
			float pi = 3.1415;		
			return pi * setl();
		}
 }; 

class Rectangle : public Shape
{
	public: 
		double printArea()
			{
				float width;
				cout << "请输入宽" << endl;	
				cin >> width;	
				return width * setl();
			}  
};
class Trapezoid : public Shape
{
	public:
		// 用一个函数printArea分别输出三者的面积，3个图形的数据在定义对象是给定。
		double printArea()
		{
			float top, down;
			cout << "请输入上边长" << endl;	
			cin >> top;
			cout << "请输入下边长" << endl;	
			cin >> down;		
			return (top + down) * setl() / 2;
		}
	
};
int main()
{
	Circle c;
	cout << "圆的面积" << c.printArea() << endl;
	Rectangle r;
	cout << "矩形的面积" << r.printArea() << endl;
	Trapezoid t;
	cout << "梯形的面积" << t.printArea() << endl;
	return 0; 
}


