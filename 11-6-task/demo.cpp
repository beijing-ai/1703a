#include <iostream>
using namespace std;

class tu{
public:
    int a;
private:
    int c;
protected:
    int d;// 类内可以访问,类外不可以
};
class ju : public tu{//继承tu: 公有继承,私有继承
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
