// �� emirp ��
#include <iostream>
#include <iomanip> 
#include <cmath> 

using namespace std;
 
bool isprime(int n); // �������� 
int reverse(int n); // �������� 

int main()
{
	int k=0, n; 
   
    cout << "ǰ100�� emirp ��Ϊ��\n" ;    
    
    for (n=2; k<100; n++) // ע��ѭ��������k �Ǽ�¼ emirp ���ĸ��� 
    {
		if ( isprime(n) && isprime(reverse(n)) )
		{
			cout << setw(6) << n;
			k++;
			if (k%10==0)  cout << endl;  
		}
	} 
	 
	cout << endl;	
	return 0;
}

bool isprime(int n)
{ 
    if (n<2) return false;
    
	for (int k=2; k<n; k++) // ���������Ҳ����дΪ k<=sqrt(n)
		if (n%k==0) return false; // �������� 
		
	return true; // ����  
} 

int reverse(int n) // ���㷴ת�� 
{
    int m=0;
    
    while (n)
    {
        m = m*10 + n%10;
        n = n/10;
    }
    return m;
}
