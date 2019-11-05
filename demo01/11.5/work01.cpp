// work01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

class Point {
	private:
		float d[2];

	public:
		void set_data() 
		{
			cin >> d[0];
			cin.sync();
			cin >> d[1];
			cin.sync();
		}
		float * get_data() 
		{
			return d;
		}
};

class Distance 
{
	public:
		float juli(float a,float b);
};

float Distance::juli(float a,float b) 
{
	return abs(a - b);
}

int main()
{
    //可以定义点类（Point），再定义一个类（Distance）描述两点之间的距离，
	//其数据成员为两个点类对象，
	//两点之间距离的计算可设计
	//由构造函数来实现。
	Point p;
	float * a;
	float jl;
	p.set_data();
	a = p.get_data();
	//cout << *a << *(a+1) << endl;
	Distance d;
	jl=d.juli(*a, *(a + 1));
	cout << jl;
}
