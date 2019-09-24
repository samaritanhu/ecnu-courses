// 最大公约数与最小公倍数
#include <iostream>

using namespace std; 

int gcd(int x, int y); // 函数声明 
int lcm(int x, int y); // 函数声明 
    
int main()
{
	int x, y;
    cout << "Please input x and y: " ;
    cin >> x >> y;
    // x=2012; y=1509;
       
    cout << "\n"; 
    cout << x << "与" << y << "的最大公约数是：" << gcd(x,y) << endl; 
    cout << x << "与" << y << "的最小公倍数是：" << lcm(x,y) << endl; 
	
	return 0;
}

int gcd(int x, int y)  // 最大公约数 
{
    int t=x;
    
    if (x>y)  t=y;
    for (int i=t; i>=1; i--)
        if (x%i==0 && y%i==0)
            return i;
}

int lcm(int x, int y)  // 最小公倍数 
{
    for (int i=1; i<=x; i++)
        if ( i*y % x == 0)
            return i*y;        
}
