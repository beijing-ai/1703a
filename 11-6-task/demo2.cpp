#include <iostream>
using namespace std;
class Cperson{
public:
    string name;
    int num;
    string sex;
    void input(){
        cout << "please input name:" << endl;
        cin >> name;
        cout << "please input num:" << endl;
        cin >> num;
        cout << "please input sex:" << endl;
        cin >> sex;    }
    void output(){
        cout << "name:" << name << endl;
        cout << "number:" << num << endl;
        cout << "sex:" << sex<< endl;
    }
};
class Cstudent:virtual Cperson{//这里可以多继承
public:
    float score;
    void input1(){
        input();
        cout << "please input score:" << endl;
        cin >> score;
    }
    void output1(){
        output();
        cout << "score:" << score<< endl;
    }
    int virtual ccc()=0;//纯虚函数
};

class Cteacher:virtual Cperson{//这里可以多继承,加上virtual叫做虚基类
public:
    float git;
    void input1(){
        input();
        cout << "please input git:" << endl;
        cin >> git;
    }
    void output1(){
        output();
        cout << "git:" << git<< endl;
    }
};
class Cdd :Cstudent,Cteacher{

};
int main(){
Cstudent s = Cstudent();
//s.input1();
//s.output1();

return 0;
}
