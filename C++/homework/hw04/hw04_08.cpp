// 3n+1 �������⣨�ݹ鷽���� 
#include <iostream>

using namespace std;
 
int num_chain(int n); // �������� 

int main()
{
	int n=90, max_chain, m, k; 
   
    max_chain = num_chain(n);
    m = n;
    
    for (n=91; n<=100; n++)  
    {
        k = num_chain(n);
		if ( k > max_chain ) 
		{
			max_chain = k; 
			m = n;
		}
			  
	}
    
	cout << "[90,100] ���������������ǣ�" << m; 
	cout << ", ������Ϊ��" << max_chain;    
	
	cout << endl;	
	return 0;
}

int num_chain(int n)  // ���� n ���������ݹ鷽�� 
{ 
    if (n==1) 
		return 1;
    else if (n%2==0) 
		return num_chain(n/2) + 1;
    else if (n%2==1) 
		return num_chain(3*n+1) + 1;
    else 
		return 0;
} 

