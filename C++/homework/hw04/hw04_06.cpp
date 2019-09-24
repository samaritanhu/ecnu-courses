// 找 emirp 数
#include <iostream>
#include <iomanip> 
#include <cmath> 

using namespace std;
 
bool isprime(int n); // 函数声明 
int reverse(int n); // 函数声明 

int main()
{
	int k=0, n; 
   
    cout << "前100个 emirp 数为：\n" ;    
    
    for (n=2; k<100; n++) // 注意循环条件，k 是记录 emirp 数的个数 
    {
		if ( isprime(n) && isprime(reverse(n)) )
		{
			cout << setw(6) << n;
			k++;
			if (k%10==0)  cout << endl;  
		}
	} 
	 
	cout << endl;	
	return 0;
}

bool isprime(int n)
{ 
    if (n<2) return false;
    
	for (int k=2; k<n; k++) // 这里的条件也可以写为 k<=sqrt(n)
		if (n%k==0) return false; // 不是素数 
		
	return true; // 素数  
} 

int reverse(int n) // 计算反转数 
{
    int m=0;
    
    while (n)
    {
        m = m*10 + n%10;
        n = n/10;
    }
    return m;
}
