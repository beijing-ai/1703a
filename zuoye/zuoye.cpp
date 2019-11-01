
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
//案例：输入一行文字，统计有多少个单词。单词和单词之间用空格分开。
//解题关键：单词的数目可以由单词间的空格决定
//解题思路：
//设置一个计数器num表示单词个数。开始时，num = 0。
//从头到尾扫描字符串。当发现当前字符为非空格，而当前字符以前的字符是空格，则表示找到了一个新的单词，num加1。
//当整个字符串扫描结束后，num中的值就是单词数。


int main()
{
	/*char sentences[100], prev = ' ';
	int i, num = 0;
	cout << "请输入句子，用空格隔开：";
	gets_s(sentences);
	for (i = 0; sentences[i] != '\0'; ++i) {
		if (prev == ' '&&sentences[i] != ' ')++num; 
		prev = sentences[i];
	}
	cout << "单词个数为：" << num << endl;*/

	enum light { red = 1, yellow, green };
	int a;
	cout << "请输入交通信号灯颜色编号(1/2/3)：";
	cin >> a;
	switch (a)
	{
	case red:cout << "stop"; break;
	case yellow:cout << "wait"; break;
	case green:cout << "go"; break;
	default:
		break;
	}

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
