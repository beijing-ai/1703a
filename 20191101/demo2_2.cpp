#include <iostream>
using namespace std;
/*��ͨ�źŵ��к죬�ƣ���������ɫ������ö�ٺ�switchʵ�����¹��ܣ�
1�����ƣ�2����Ƶƣ�3�����̵�
    ����1��� stop
    ����2��� wait
    ����3��� go*/
enum signal {red=1,yellow=2,green=3};

int main(){
    int lights;
    cout << "�������źŵƱ�ţ�"; 
    cin >> lights;
    switch(lights){
    	case red:
    		cout << "stop" << endl;
    		break;
    	case yellow:
    		cout << "wait" << endl;
    		break;
    	case green:
    		cout << "go" << endl;
    		break;
    	default:
    		cout << "�������" << endl; 
	}
	return 0;
}
