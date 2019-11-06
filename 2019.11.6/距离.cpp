# include <iostream>
# include <math.h>
using namespace std;

//可以定义点类（Point）
class Point
{
	int x, y;
	public:
		Point()
		{
			
		}
		~Point()
		{
			
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

 }; 
// 再定义一个类（Distance）描述两点之间的距离
class Distance
{
	int y;
	public:
		Distance()
		{
			
		}
		~Distance()
		{
			
		}
		int set()
		{
			int x, y;
			Point p1, p2;
			x = pow(p1.setx() - p2.setx(), 2);
			y = pow(p1.sety() - p2.sety(), 2);
			return sqrt(x+y);
		}

 };
 
int main()
{
	Distance d;
	cout << d.set();
//	if(dis < 0)
//	{
//		dis = dis * -1;
//	}
//	cout << "两点之间距离为" << dis; 
	return 0;
}
//其数据成员为两个点类对象，
//两点之间距离的计算可设计由构造函数来实现。
//pow  平方
//abs  绝对值 
//sqrt  开方 
