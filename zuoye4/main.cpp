#include <iostream>
#include <string>
using  namespace std;



class Shape{
public:
    int length = 1;
};

class Circle:Shape{
public:
    float const PI = 3.14;
public:
    float area(){
        float a ;
        a = (this->length*0.5)*(this->length*0.5) * this->PI;
        return a;
    }
};

class Rectangle:Shape{
public:
    float width = 5;
public:
    float area(){
        float a ;
        a = this->length * this->width;
        return a;
    }
};

class Trapezoid:Shape{
public:
    float height = 10;
    float top_length = 3;
public:
    float area(){
        float a ;
        a = (this->length + this->top_length) * this->height * 0.5;
        return a;
    }


};
int main() {
    Circle c;
    Rectangle r;
    Trapezoid t;
    float c_area,r_area,t_area;


    c_area = c.area();
    r_area = r.area();
    t_area = t.area();

    cout << "圆形面积：" << c_area << endl ;
    cout << "矩形面积：" << r_area << endl ;
    cout << "梯形面积：" << t_area << endl ;
    return 0;
}