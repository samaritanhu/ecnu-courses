// 孪生素数
#include <iostream>
#include <iomanip> 
#include <cmath> 

using namespace std;

bool isprime(int n); // 函数声明 

int main()
{
	int p, n; 
   
    for (n=2; n<999; n++)  
		if ( isprime(n) && isprime(n+2) ) 
			cout << "(" << n << "," << n+2 << ")" << endl;

	cout << endl;	
	return 0;
}

bool isprime(int n)
{ 
    if (n<2) return false;
    
	for (int k=2; k<=sqrt(n); k++)   
		if (n%k==0) return false; // 不是素数 
		
	return true; // 素数  
} 
