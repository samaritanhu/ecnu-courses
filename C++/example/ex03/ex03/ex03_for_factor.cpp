// for ����һ����������������������� 

#include <iostream>

using namespace std;

int main()
{
	int n, k;
	
	cout << "Please input a positive integer: ";
	cin >> n;
	cout << "n=" << n << endl;
    cout << "Its factors: ";
	
	for (k=1; k <= n; k++)
		if (n % k == 0)
			cout << k << "  ";
		cout << endl;
	
	return 0;
}
