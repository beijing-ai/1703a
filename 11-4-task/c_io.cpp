#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string s;
    ofstream outf;
    ifstream inf;
    inf.open("F://Repository//1703a//11-4-task//stuscore//in.txt");
    outf.open("F://Repository//1703a//11-4-task//stuscore//out.txt");
    while (getline(inf, s))//getline(inf,s)是逐行读取inf中的文件信息
    {
        outf << s << '\n';
        cout << s << endl;
    }
    outf << "dog" << '\n';
    inf.close();
    outf.close();
    return 0;
}
