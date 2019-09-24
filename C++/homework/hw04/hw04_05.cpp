// 递归方法找出所有素数因子 
#include <iostream>

using namespace std;
 
void prime_factor(int n); // 函数声明 

int main()
{
	int n;
 
    cout << "Input n: ";
    cin >> n; 
    
    cout << n << "的素数因子有：" ;    
    prime_factor(n);
	 
	cout << endl << endl;
	
	return 0;
}

void prime_factor(int n)
{ 
    int k = 2;
    
    if (n==1) return;
    
    while (n%k != 0)  k++; // 找第一个（最小）素数因子 
    
    cout << k << " ";  // 输出该素数因子 
    
    prime_factor(n/k);  // 找 n/k 的最小素数因子 
} 

// 下面是另一种实现方法，供参考 
/* 
void prime_factor(int n)
{
    for (int k=2; k<n; k++)
        if (n%k == 0) 
        {
            cout << k << " ";
            prime_factor(n/k); 
            return;
        }
        
    cout << n << endl;
} */
