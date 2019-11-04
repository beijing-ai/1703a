# include <iostream>
using namespace std;

void BubbleSort(int *array,int m);

int main(int argc, const char** argv)
{  
    // 已知数组Array={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14},编程实现数组元素的输入，
    // 然后输出这15个数，编写冒泡排序算法的函数void BubbleSort(int *array,int m)，
    // 其中array为数组名，m为数组大小，调用冒泡排序算法对这15个数进行重新排序，输出重新排序后的数组元素。
    int array[]={3,8,9,4,5,6,7,2,1,0,11,12,13,15,14};
    BubbleSort(array,15);

    return 0;
}

void BubbleSort(int s[15],int m){
    int i,j,t,x;
    for(i=1;i<15;i++)				 /* 趟数，（一块一块一共有四块，so i=1） */
		{
			for(j=0;j<15-i;j++)			 /* 每一趟，每一块里的比较次数，第一块比四次，以此递减 */
			{
				if(s[j]<s[j+1])			 /* 把第一个数跟第二个数比较 */
				{
					t=s[j];				 /* 换位 */
					s[j]=s[j+1];
					s[j+1]=t;
				}
			}
		}
    for(x=0;x<15;x++)					 /* 输出 */
    {
    	printf("%d\t",s[x]);
    }
    
}