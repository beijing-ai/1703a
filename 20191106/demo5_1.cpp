#include <iostream>
#include <cstring>
using namespace std;

/*
дһ�����򣬶����������Shape���������������ࣺCircle��Բ�Σ���Rectangle�����Σ���Trapezoid�����Σ���
��һ������printArea�ֱ�������ߵ������3��ͼ�ε������ڶ�������Ǹ�����
*/
class Shape{
	public:
		string shapename;
	public:
		void printArea(){
			if shapename.compare("Բ��"){
				cout << shapename << "�����Ϊ��" << ;
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
			cout << shapename << "�����Ϊ��" <<  PI*(radius*radius);
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
			cout << shapename << "�����Ϊ��" << longth*width;
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
			cout << shapename << "�����Ϊ��" << ((uplongth+downlongth)*height)/2;
		}		
};
Trapezoid::Trapezoid()
Trapezoid::~Trapezoid()

int main(){
	
	return 0;
}
