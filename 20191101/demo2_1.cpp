#include <iostream>
using namespace std;

int main(){
	//����һ�����֣�ͳ���ж��ٸ����ʡ����ʺ͵���֮���ÿո�ֿ�
	//An apple once a day keeps your enemies away
	char strs[100];
	char before;
	cout << "������һ�仰��" ; 
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
	cout << "���ʸ���Ϊ" << count << "��";
	return 0;
}
