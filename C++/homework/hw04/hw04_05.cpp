// �ݹ鷽���ҳ������������� 
#include <iostream>

using namespace std;
 
void prime_factor(int n); // �������� 

int main()
{
	int n;
 
    cout << "Input n: ";
    cin >> n; 
    
    cout << n << "�����������У�" ;    
    prime_factor(n);
	 
	cout << endl << endl;
	
	return 0;
}

void prime_factor(int n)
{ 
    int k = 2;
    
    if (n==1) return;
    
    while (n%k != 0)  k++; // �ҵ�һ������С���������� 
    
    cout << k << " ";  // ������������� 
    
    prime_factor(n/k);  // �� n/k ����С�������� 
} 

// ��������һ��ʵ�ַ��������ο� 
/* 
void prime_factor(int n)
{
    for (int k=2; k<n; k++)
        if (n%k == 0) 
        {
            cout << k << " ";
            prime_factor(n/k); 
            return;
        }
        
    cout << n << endl;
} */
