/*
  ��ӡͼ��

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
	int i, j;
	
	// �����ǰ4��ͼ��
    for(i=1; i<=4; i++) 	
    { 
        for(j=1; j<=8-2*i; j++) // ����ո� 
            cout<<' ';
            
        for(j=1; j<=2*i-1; j++)  // ����Ǻ� 
            cout<<'*';
            
        cout<<endl;  // ���� 
    }
    
    // �����3��ͼ��
    for(i=1; i<=3; i++)	
    { 
        for(j=1; j<=7-2*i; j++)  // ����Ǻ�
            cout<<'*';	 
            
        cout<<endl; // ���� 
    }
	
	return 0;
}
