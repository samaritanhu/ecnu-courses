// ��ת���� 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void reverse(int x[], int n); // ��ת����

int main()
{
	int n=10, k;    
	int x[n];
	
	srand(time(0));
	for (k=0; k<n; k++)  
		x[k] = rand() % 100; // ����һ���������, �������� 

    cout << "��תǰ��x=[ " ;
	for (k=0; k<n; k++)  
		cout << x[k] << " ";
	cout << "]\n"; 
		    
	reverse(x, n);
	
    cout << "��ת��x=[ " ;
	for (k=0; k<n; k++)  
		cout << x[k] << " ";
	cout << "]\n"; 	

	return 0;
}

void reverse(int x[], int n)  // ��ת����
{
	int y[n], k;
	
	for (k=0; k<n; k++)
	    y[n-k-1] = x[k]; // ��ת 
	    
	for (k=0; k<n; k++)
	    x[k] = y[k];	 // ��ֵ 

//  ��һ�ָ����ķ���	
//	int t;
//	for (int k=0; k<n/2; k++)
//		{t=x[k]; x[k]=x[n-1-k]; x[n-1-k]=t; }	
} 

