/*
  ��ӡͼ�� (��ͨ�õĳ���)

        *
      ***
    *****
  *******
  *****
  ***
  *
   
*/ 
#include <iostream>

using namespace std;

int main()
{
	int n=6, i, j;
	
	// �����ǰ4��ͼ��
    for(i=1; i<=n; i++) 	
    { 
        for(j=1; j<=2*(n-i); j++) // ����ո� 
            cout<<' ';
            
        for(j=1; j<=2*i-1; j++)  // ����Ǻ� 
            cout<<'*';
            
        cout<<endl;  // ���� 
    }
    
    // �����3��ͼ��
    for(i=1; i<=n-1; i++)	
    { 
        for(j=1; j<=2*(n-i)-1; j++)  // ����Ǻ�
            cout<<'*';	 
            
        cout<<endl; // ���� 
    }
	
	return 0;
}
