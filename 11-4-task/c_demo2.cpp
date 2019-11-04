#include <iostream>
#include <fstream>
using namespace std;

//某次体检中，每个小组是由5名工人组成，
//现存储其中一个小组5名工人的姓名，
//工号（例如：1001）和薪资，然后输入一个工人的姓名，
//查找该工人是否为小组的成员，如果是提示是小组成员，
//同时输出该工人的工号和薪资，如果不是提示不是小组成员。
//要求：将查找到的小组成员信息
//写入到E盘下文件夹名为stuscore的stu_inform.txt文件中
struct Worker{
    int num;
    float money;
};
int main(){
    Worker ws[5] = {{1,5000},{2,8000},{3,7000},{4,7000},{5,6000}};
    int num;

    ifstream inf;
    ofstream outf;
    string s;
    int i;
    inf.open("F://Repository//1703a//11-4-task//stuscore//in1.txt");
    outf.open("F://Repository//1703a//11-4-task//stuscore//ou1.txt");
    while (getline(inf,s)){
        outf << s << '\n';
    }
    string a;
    while (1){
        cout << "请输入您要查找工资的工人工号:" << endl;
        cin >> num;
        for(i=0;i<5;i++){
            if(ws[i].num==num){
                outf << ws[i].num << "money:" << ws[i].money << '\n';
                cout << ws[i].num << "money:" << ws[i].money << endl;
            }
        }
        cout << "是否继续查询:y/n" << endl;
        cin >> a;
        if(a=="n"){
            break;
        }else{
            continue;
        }
    }

    inf.close();
    outf.close();
}
