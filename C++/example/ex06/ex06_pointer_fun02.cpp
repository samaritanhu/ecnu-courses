// ����ָ�� 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int Gcd(int x, int y)  // ���Լ�� 
{
    int z = x;    
    if (x > y) z = y; // ȡ x �� y �е���Сֵ 
    for (int i=z; i>=1; i--)
        if (x%i==0 && y%i==0) return i;
}

int Lcm(int x, int y)  // ��С������ 
{
    for (int i=1; i<=x; i++)
        if ( i*y % x == 0) return i*y;        
}

int main()
{
    int a, b;
    
    int (* pf)(int, int); // ��������ָ�� 

    cout << "Input a and b: ";
    cin >> a >> b;
    
    pf = Gcd; // pf ָ���� Gcd     
    cout << "���Լ����" << pf(a,b) << endl;
    
    pf = Lcm; // pf ָ���� Lcm     
    cout << "��С��������" << pf(a,b) << endl;

    cout << endl; 
	
	return 0;
}


