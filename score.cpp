//����10��ѧ���ĳɼ�
//���10��ѧ���ĳɼ�
//����ܳɼ�
//���ƽ���ɼ�
//����ɼ���ߵ�ѧ���ĳɼ�
//����ɼ���͵�ѧ���ĳɼ�
//��������Ӹߵ��׵�ѧ���ɼ�
#include <iostream> 
using namespace std;

int main()
{
	double a[10];
	double sum,ave;
	double max=0.0,min=1000;
	int i;
	for(i=0;i<10;i++)
	{
		cout << "������:";
		cin >> a[i];
		sum += a[i];
		if(max<a[i])
		{
			max = a[i]; 
		}
		if(min>a[i])
		{
			min = a[i];
		}
	} 
	
	for(i=0;i<10;i++)
	{
		cout << "��" << (i+1) << "���˳ɼ�:" << a[i] << endl;
	} 
	
	cout << "�ܳɼ�:" << sum << ",ƽ���ɼ�:" << sum/10 << ",��߳ɼ�:" << max << ",��ͳɼ�:" << min << endl;
	
	for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10 - i - 1; j++)
        {
            if(a[j]<a[j+1])   
            {
                int temp;       
                temp = a[j];
                a[j] = a[j+1]; 
                a[j+1] = temp;   
            }
        }
    }
  
    for(int k = 0; k < 10; k++)
    {
    	cout << a[k] << "\t";
	}
        
	return 0;
};
