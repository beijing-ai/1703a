//12��ʵ�����غ���Double(x)������ֵΪ���˲����������������ֱ�Ϊ���͡������͡�˫�����ͣ�����ֵ���������һ����������ģ��ʵ�֣�

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
