// day02_2019_11_04.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	cout << "请输入1-1000之内的10个整数："<<endl;
	int arr[10];
	int i,enter;
	for (i=0;i<10;i++) 
	{
		cout << "请输入第" << (i + 1) << "个整数：";
		cin >> enter;
		arr[i] = enter;
		cout << "输入的整数是：" << arr[i] << "\n";
		if (arr[i] % 3 == 0 && arr[i] % 5 ==0)
		{
			cout << "这个数是：" << arr[i] << "\t" << "下标是：" << i <<endl;
		}
	}
}

