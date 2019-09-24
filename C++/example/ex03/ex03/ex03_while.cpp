// while

#include <iostream>

using namespace std;

int main()
{
	int i=1, n, s=0;
	
	cout << "Please input n: " ;
	cin >> n;
	
	while ( i <= n )
	{
		s += i;
		i++;
	}
	cout << "1+...+" << n << "=" << s << endl;
	
	return 0;
}
