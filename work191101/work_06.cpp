#include <iostream>
using namespace std; 

int main()
{
	//6����1-100���ڵ�����
	int i,j;
	
	cout << "100���ڵ������У�\n"; 
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
//	cout << "������һ����:";
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
//		cout << num<<"��������";
//	}
//	else
//	{
//		cout << "������";
//	}
//	 


//	return 0;
//	for(i=2;i<num;i++){
//        if(num%i==0){
//            a++;  // ����������1
//        }
//    }
//    if(a==0){
//        printf("%d��������\n", num);
//    }else{
//        printf("%d����������\n", num);
//    }
}

