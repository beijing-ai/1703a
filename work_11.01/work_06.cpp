#include <iostream>
using namespace std; 

int main()
{
	//6、求1-100以内的素数
	int i,j;
	
	cout << "100以内的素数有：\n"; 
	bool flag;
	for (i=2;i<101;i++)
	{
		flag=true;
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{
				flag=false; 
			}
		}
		if (flag)
		{
			cout << i << "\n"; 
			
		}
	}
	
	
	
//	int a=0;
//	cout << "请输入一个数:";
//	cin >> num;
//	for (i=2;i<num;i++)
//	{
//		if (num%i==0)
//		{
//			a++;
//		}
//	} 
//	if (a!=0)
//	{
//		cout << num<<"不是素数";
//	}
//	else
//	{
//		cout << "是素数";
//	}
//	 


//	return 0;
//	for(i=2;i<num;i++){
//        if(num%i==0){
//            a++;  // 素数个数加1
//        }
//    }
//    if(a==0){
//        printf("%d是素数。\n", num);
//    }else{
//        printf("%d不是素数。\n", num);
//    }
}

