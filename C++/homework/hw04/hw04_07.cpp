// 3n+1 链数问题
#include <iostream>

using namespace std;
 
int num_chain(int n); // 函数声明 

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
    
	cout << "[90,100] 中链数最大的整数是：" << m; 
	cout << ", 其链数为：" << max_chain; 
	
	cout << endl;	
	return 0;
}

int num_chain(int n) // 计算 n 的链数，循环方法  
{
	int k=1; // 记录链数 

    while (n>1)
    {
		if (n%2==0) 
			n = n/2; 
		else  
			n = 3*n + 1;

		k = k + 1;		
	}
		
	return k; 
} 

