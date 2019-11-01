#include <iostream>
using namespace std;

int main(){
	//鸡兔共有30只，脚共有90只，问鸡兔各有多少？
	int i,j;
	for(i = 0 ; i < 100 ;i++){
		for(j = 0 ; j < 100 ;j++){
			if(i + j == 30){
				if (2 * i + 4 * j == 90){
					cout << "鸡有" << i << "只" << endl; 
					cout << "兔有" << j << "只" ;
				} 
			}
		}
	} 
} 
