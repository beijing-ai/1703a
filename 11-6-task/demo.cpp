#include <iostream>
using namespace std;

class tu{
public:
    int a;
private:
    int c;
protected:
    int d;// ���ڿ��Է���,���ⲻ����
};
class ju : public tu{//�̳�tu: ���м̳�,˽�м̳�
public:
    void f1(){
        a = 10;
    }
    void f2(){
        d = 20;
        cout << d;
    }
};
int main(){
    ju j = ju();
    j.f1();
    cout << j.a;
    j.f2();
    //cout << j.d;
    return 0;
}
