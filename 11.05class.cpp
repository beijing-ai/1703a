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
		
		//赋值函数1
		void setinfo1()
		{
			cout << "请输入长宽高：" << endl;
			cin >> lenth >> width >> height ; 
		} 
		 
		//赋值函数2
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
		 
		 
		 
		//求体积函数 
		void volume()
		{
			int vol;
			vol = lenth * width * height;
			cout << vol<<endl;
		}
	
		~Box()
		{
			cout << "销毁对象，释放内存！" << endl;
		}
} ;

 
 

// 定义点类（Point）
class Point
{
	int x,y;
	public:
		Point()
		{
			cout << "构造函数，赋值！"; 
		}
		
		~Point()
		{
			cout << "销毁对象，释放内存！"; 
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

// 再定义一个类（Distance）描述两点之间的距离
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
//pow  平方
//abs  绝对值 
//sqrt  开方 




int main() {
	Box b1,b2(3,5,10) ;
	b2.volume();
	
	b1.setinfo1();
	b1.volume();
	
	
	Distance d;
	cout << d.setx();
	return 0;
}
