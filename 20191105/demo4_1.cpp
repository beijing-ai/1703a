#include <iostream>
using namespace std;
/*
���Զ�����ࣨPoint�����ٶ���һ���ࣨDistance����������֮��ľ��룬
�����ݳ�ԱΪ���������������֮�����ļ��������ɹ��캯����ʵ�֡�
*/
class Point{
	private:
		int x;
		int y;
	public:
		Point(int x,int y){
			this->x = x;
			this->y = y;
		}
};

class Distance{
	private:
		Point p1;
		Point p2;
	public:
		Distance(Point::Point p1,Point::Point p2){
			d = sqrt((this->p2.x - this->p1.x)*(this->p2.x - this->p1.x) + (this->p2.y - this->p1.y)*(this->p2.y - this->p1.y));
			cout << "����֮��ľ���Ϊ��" << d; 
		}
};


int main(){
	Point p1(3,5);
	Point p2(5,10);
	Distance dist(p1,p2);
	return 0;
}
