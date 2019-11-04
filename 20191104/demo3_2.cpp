#include <iostream>
using namespace std;
/*
已知数组Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},编程实现数组元素的输入，
然后输出这15个数，编写冒泡排序算法的函数void BubbleSort(int *array,int m)，其中array为数组名，m为数组大小，
调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素。
2   案例完成思路要求（共30分）  
(1)程序加入注释 （3分）
(2)代码实现：
(1)导入相关头文件(2分)
(2)初始化变量和数组 （2分)
(3)正确输入数组元素（3分)
(4)正确输出数组元素（3分）
(5)正确编写冒泡排序算法函数，注意要求是升序排序（8分）
(6)正确调用冒泡排序算法函数（4分）
(7)输出重新排序后的数组元素（5分）
*/

void BubbleSort(int *array,int m){
	int i,j,temp;
	cout << "\n升序排列为：" ;
    for(i=1;i<m;i++)
    {
    	for(j=0;j<m-i;j++)
    	{
        	if(array[j]>array[j+1])
        	{
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }	
    	}
    }
    for(j=0;j<m;j++)
    {
        cout << array[j] << " ";
    }
}

int main(){
	// Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14}
	int array[15]; 
	cout << "请输入数组元素：" ;
	for(int i=0;i<15;i++){
		cin >> array[i];
	}
	cout << "数组里的元素为：" << endl;
	for (int j=0;j<15;j++){
		cout << array[j] << " ";
	}
	cout << "\n";
	BubbleSort(array,15);
	return 0;
}
