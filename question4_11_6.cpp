//12：实现重载函数Double(x)，返回值为输人参数的两倍；参数分别为整型、浮点型、双精度型，返回值类型与参数一样。（用类模板实现）

#include <iostream>
using namespace std;

class Cal{
	
	public:
		int Double(int x)
		{
			return x*2;	
		} 
		float Double(float x)
		{
			return x*2;	
		} 
		double Double(double x)
		{
			return x*2;	
		} 
	
};

int main()
{
	int a=2;
	float b=1.5;
	double c=2.5;
	Cal ca;
	cout << ca.Double(a) <<endl;
	cout << ca.Double(b) <<endl;
	cout << ca.Double(c) <<endl;
}
