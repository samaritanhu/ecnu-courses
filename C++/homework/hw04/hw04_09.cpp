// 梅森素数
#include <iostream>
#include <cstdlib> 
#include <iomanip> 
#include <cmath> 

using namespace std;

bool isprime(int n); // 函数声明 

int main()
{
	int p, n; 
   
    for (p=2; p<32; p++)  
    {
		n = pow(2, p) - 1;
		if ( isprime(n) ) 
			cout << setw(2) << p << "  " << n << endl;	  
	}
	
	cout << endl;	
	return 0;
}

bool isprime(int n)
{ 
    if (n<2) 
		return false;
    
	for (int k=2; k<=sqrt(n); k++)   
		if (n%k==0) 
			return false; // 不是素数 
		
	return true; // 素数  
} 
