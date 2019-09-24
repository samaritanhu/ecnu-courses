// 最大公约数 
#include <iostream>

using namespace std;

int main()
{
	int m, n, gcd;
	
	cout << "Input m: "; cin >> m;
	cout << "Input n: "; cin >> n;
	
	for (int k=1; k<=m && k<=n; k++)
	{
		if (m%k==0 && n%k==0)
		    gcd = k; 
	}
	
	cout << "最大公约数是: " << gcd << endl;       
	
	return 0;
}
