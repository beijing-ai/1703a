#include <iostream>
#include<math.h>
using  namespace std;

class Box
{
	private:
		int lenth;
		int width;
		int height;
		
	public:
		Box()
		{
			
		}
		
		
		Box(int lenth,int width,int height)
		{
			this->lenth = lenth;
			this->width = width;
			this->height = height;
		}
		
		//��ֵ����1
		void setinfo1()
		{
			cout << "�����볤��ߣ�" << endl;
			cin >> lenth >> width >> height ; 
		} 
		 
		//��ֵ����2
		void setC()
		{
			cin >> lenth;
		} 
		 
		void setK()
		{
			cin >> width;
		} 
		
		void setG()
		{
			cin >> height;
		} 
		 
		 
		 
		//��������� 
		void volume()
		{
			int vol;
			vol = lenth * width * height;
			cout << vol<<endl;
		}
	
		~Box()
		{
			cout << "���ٶ����ͷ��ڴ棡" << endl;
		}
} ;

 
 

// ������ࣨPoint��
class Point
{
	int x,y;
	public:
		Point()
		{
			cout << "���캯������ֵ��"; 
		}
		
		~Point()
		{
			cout << "���ٶ����ͷ��ڴ棡"; 
		}
		
		int setx()
		{
			cin >> x;
			return x;
		} 
		
		int sety()
		{
			cin >> y;
			return y;
		} 
} ;

// �ٶ���һ���ࣨDistance����������֮��ľ���
class Distance
{
	public:
		Distance()
		{
			
		}
		
		~Distance()
		{
			
		}
		
		int setx()
		{
			int x,y;
			Point p1,p2;
			x = pow(p1.setx() - p2.setx(),2);
			y = pow(p1.sety() - p2.sety(),2);
			return sqrt(x+y);
		}
};
//pow  ƽ��
//abs  ����ֵ 
//sqrt  ���� 




int main() {
	Box b1,b2(3,5,10) ;
	b2.volume();
	
	b1.setinfo1();
	b1.volume();
	
	
	Distance d;
	cout << d.setx();
	return 0;
}
