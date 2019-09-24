// 反转数组 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void reverse(int x[], int n); // 反转数组

int main()
{
	int n=10, k;    
	int x[n];
	
	srand(time(0));
	for (k=0; k<n; k++)  
		x[k] = rand() % 100; // 生成一个随机数组, 供测试用 

    cout << "反转前：x=[ " ;
	for (k=0; k<n; k++)  
		cout << x[k] << " ";
	cout << "]\n"; 
		    
	reverse(x, n);
	
    cout << "反转后：x=[ " ;
	for (k=0; k<n; k++)  
		cout << x[k] << " ";
	cout << "]\n"; 	

	return 0;
}

void reverse(int x[], int n)  // 反转数组
{
	int y[n], k;
	
	for (k=0; k<n; k++)
	    y[n-k-1] = x[k]; // 反转 
	    
	for (k=0; k<n; k++)
	    x[k] = y[k];	 // 赋值 

//  另一种更简洁的方法	
//	int t;
//	for (int k=0; k<n/2; k++)
//		{t=x[k]; x[k]=x[n-1-k]; x[n-1-k]=t; }	
} 

