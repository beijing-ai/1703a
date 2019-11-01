#include <iostream>
using namespace std;

int main(){
	//输入一行文字，统计有多少个单词。单词和单词之间用空格分开
	//An apple once a day keeps your enemies away
	char strs[100];
	char before;
	cout << "请输入一句话：" ; 
	gets(strs);
	cout << strs << endl;
	int i,count=1;
	bool flag = false;
	for(i=0;(before=strs[i]) != '\0';i++){
		if(before == ' '){
			flag = true;
		}
		else if(flag){
			count ++;
			flag = false;
		}
	}
	cout << "单词个数为" << count << "个";
	return 0;
}
