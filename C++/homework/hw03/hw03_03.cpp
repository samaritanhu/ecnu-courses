/*
Ҫ��Ӽ�������һ������ 1 ����������Ҫ�ж�����ĺϷ��ԣ����Ƿ����1����
Ȼ�����������������������������
Ҫ��ʹ�� for ѭ���� if ���
*/

#include <iostream>

using namespace std;

int main()
{
	int n, k, i, flag=0;
	cout << "Please input an integer: ";
	cin >> n;
	
	if (n<=1)  //  �ж�����ĺϷ���
	{
		cout << "Input ERROR!" << endl;
	    return 1;
    }	
	
	for (k=n; k>1 && flag==0; k--)	
	    for (i=2,flag=1; i<k; i++)
		    if (k%i==0)
		    { flag=0;  break; }
		    
	cout << "������ " << n << " ��������:" << k+1 << endl;
	
	return 0;
}
