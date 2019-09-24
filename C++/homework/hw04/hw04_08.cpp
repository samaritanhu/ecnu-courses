// 3n+1 链数问题（递归方法） 
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

int num_chain(int n)  // 计算 n 的链数，递归方法 
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

