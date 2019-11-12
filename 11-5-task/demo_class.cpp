#include <iostream>
using namespace std;

class box{
    private:
        float length;
        float width;
        float height;
    public:
        box(float l,float w,float h){
            length = l;
            width = w;
            height = h;
        }
        float computer(){
            float area;
            area = length*width*height;
            return area;
        }
        ~box(){
            cout << "die ..." << endl;
        }

};
int main(){
    box b1 = box(10,2,3);
    box b2 = box(23,4,5);
    cout << b1.computer() << endl;
    cout << b2.computer() << endl;
    return 0;
}
