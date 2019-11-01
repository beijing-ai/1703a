// demo02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
  /*  交通信号灯有红，黄，绿三种颜色，利用枚举和switch实现如下功能：	1代表红灯，2代表黄灯，3代表绿灯		输入1输出 stop		输入2输出 wait		输入3输出 go*/	enum lights {red=1,yollow,green};	int a;	cin >> a;	switch (a) {	case red:cout << "stop" << endl; 		break;	case yollow:cout << "wait" << endl;		break;	case green:cout << "go" << endl;		break;	default:cout<<"输入有误"<<endl;	}
}

