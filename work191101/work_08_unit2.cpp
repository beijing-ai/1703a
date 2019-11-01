#include <iostream>
using namespace std;

int main()
{
	//8、输入一行文字，统计有多少个单词。单词和单词之间用空格分开。
	char aaa[80],prev = ' ';
	int i,num = 0;
	gets(aaa);
	for (i=0;aaa[i]!='\0';++i)
	{
		if (prev==' '&&aaa[i]!=' ')
		{
			++num;
		}
		prev = aaa[i];
	}	
	cout << "单词个数：" << num << endl;
	return 0; 
}


