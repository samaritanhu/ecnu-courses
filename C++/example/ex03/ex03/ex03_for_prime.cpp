// 判断一个数是否为素数 

#include <iostream>

using namespace std;

int main()
{
	int n, k;
	
	cout << "Please input a positive integer: ";
	cin >> n;
		
	for (k = 2; k < n; k++)
	{
        if ( n % k == 0 )  break;		    
    }	
    
    if (k < n)
        cout << "n=" << n 
             << " is not a prime number." << endl;
    else
        cout << "n=" << n << " is a prime number." << endl;
        
	
	return 0;
}
