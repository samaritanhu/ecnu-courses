/* 
�޸ĳ��� ex03_goto.cpp������ʹ�� goto ���
һ����Ȼ����ֵ�����������λ�ϵ����ĺ͵� 4 ����
�����������������С�Ķ�λ���� 
*/

#include <iostream>

using namespace std;

int main()
{
	int i, j, flag=0, k;
	
	for (i=1; i<=9 && flag==0; i++)	
	    for (j=1; j<=9 && flag==0; j++)
		    if (10*i+j == 4*(i+j))
		    { k=10*i+j; flag=1; }
		    
	cout << "����Ҫ�������: " << k << endl;
	
	return 0;
}
