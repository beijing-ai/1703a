#include <iostream>
using namespace std;

int main(){
	//���ù���30ֻ���Ź���90ֻ���ʼ��ø��ж��٣�
	int i,j;
	for(i = 0 ; i < 100 ;i++){
		for(j = 0 ; j < 100 ;j++){
			if(i + j == 30){
				if (2 * i + 4 * j == 90){
					cout << "����" << i << "ֻ" << endl; 
					cout << "����" << j << "ֻ" ;
				} 
			}
		}
	} 
} 
