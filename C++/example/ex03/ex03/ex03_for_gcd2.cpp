// ���Լ�� 
#include <iostream>

using namespace std;

int main()
{
	int m, n, gcd;
	
	cout << "Input m: "; cin >> m;
	cout << "Input n: "; cin >> n;
	
	int k;
	k = (m<n ? m : n);
	for ( ; k>0; k--)
	{
		if (m%k==0 && n%k==0)
		{
			gcd = k; 
		    break;
		}
	}
	
	cout << "���Լ����: " << gcd << endl;       
	
	return 0;
}
