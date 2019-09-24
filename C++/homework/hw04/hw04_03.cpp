// Fibonacci Êı
#include <iostream>

using namespace std;

long fibo(int n); // º¯ÊıÉùÃ÷ 

int main()
{
	int n;
	 
	cout << "Please input n: "; 
    cin >> n;
    
    
	cout << "F(" << n << ")=" << fibo(n) << "\n" << endl;
	
	return 0;
}

long fibo(int n)
{
    if (n==1) return 1;
    else if (n==2) return 1;
    else return fibo(n-1) + fibo(n-2); 
}

