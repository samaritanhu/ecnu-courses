// ���Լ������С������
#include <iostream>

using namespace std; 

int gcd(int x, int y); // �������� 
int lcm(int x, int y); // �������� 
    
int main()
{
	int x, y;
    cout << "Please input x and y: " ;
    cin >> x >> y;
    // x=2012; y=1509;
       
    cout << "\n"; 
    cout << x << "��" << y << "�����Լ���ǣ�" << gcd(x,y) << endl; 
    cout << x << "��" << y << "����С�������ǣ�" << lcm(x,y) << endl; 
	
	return 0;
}

int gcd(int x, int y)  // ���Լ�� 
{
    int t=x;
    
    if (x>y)  t=y;
    for (int i=t; i>=1; i--)
        if (x%i==0 && y%i==0)
            return i;
}

int lcm(int x, int y)  // ��С������ 
{
    for (int i=1; i<=x; i++)
        if ( i*y % x == 0)
            return i*y;        
}
