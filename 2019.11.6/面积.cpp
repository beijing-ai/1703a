# include <iostream>
using namespace std;

class Shape
{
	float lenght;
	public:
		float setl()
		{
			cout << "������ͼ�εĳ�" << endl;
			cin >> lenght;	
			return lenght;
		}
 };
// 8��дһ�����򣬶����������Shape���������������ࣺCircle��Բ�Σ���Rectangle�����Σ���Trapezoid�����Σ�
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
				cout << "�������" << endl;	
				cin >> width;	
				return width * setl();
			}  
};
class Trapezoid : public Shape
{
	public:
		// ��һ������printArea�ֱ�������ߵ������3��ͼ�ε������ڶ�������Ǹ�����
		double printArea()
		{
			float top, down;
			cout << "�������ϱ߳�" << endl;	
			cin >> top;
			cout << "�������±߳�" << endl;	
			cin >> down;		
			return (top + down) * setl() / 2;
		}
	
};
int main()
{
	Circle c;
	cout << "Բ�����" << c.printArea() << endl;
	Rectangle r;
	cout << "���ε����" << r.printArea() << endl;
	Trapezoid t;
	cout << "���ε����" << t.printArea() << endl;
	return 0; 
}


