//11��������ࣨPoint�����ٶ���һ��������Distance����������֮��ľ��룬�����ݳ�ԱΪ����������󣬽�����֮����뺯������Ϊ
//Point�����Ԫ������
#include <iostream>
using namespace std;
#include<math.h>

class Point
{
	private:
		double x;
		double y;
		
	public:
		Point(double x,double y)
		{
			this->x = x;
			this->y = y;
		}
		
		friend void Distance(Point p1,Point p2)
		{
			cout << sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
		}
		
		Point()
		{
			
		}
		
		~Point()
		{
			
		}
};

int main()
{
	Point p1(4,5),p2(7,9);
	Distance(p1,p2);
	
	return 0;
}
