// ����
#include <iostream>
#include <iomanip>

using namespace std;

bool isprime(int n)
{
	for(int k=2; k<n; k++)
		if (n%k==0)  return false;
		
	return true;
}

int main()
{
  	int k=0;
  	
  	cout << "��λ�������е�������:\n";
  	for(int n=100; n<1000; n++)
  	if(isprime(n))
  	{
  		cout << setw(5) << n;
  		k++;
  		if (k%8==0) cout << endl;  		
	}
  	
  	return 0; 
}
