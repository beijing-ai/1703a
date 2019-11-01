//交通信号灯有红，黄，绿三种颜色，利用枚举和switch实现如下功能：
//          1代表红灯，2代表黄灯，3代表绿灯
//          输入1输出 stop
//          输入2输出 wait
//          输入3输出 go

#include <iostream> 
using namespace std;
enum trafficlights {stop=1,wait=2,go=3} lights;
int main()
{
	int i;
	cin >> i;
	switch(i)
	{
		case (trafficlights)1: cout << "stop";break;
		case (trafficlights)2: cout << "wait";break;
		case (trafficlights)3: cout << "go";break;
	}	
};
