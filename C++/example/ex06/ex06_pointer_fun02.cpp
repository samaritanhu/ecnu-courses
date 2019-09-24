// 函数指针 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int Gcd(int x, int y)  // 最大公约数 
{
    int z = x;    
    if (x > y) z = y; // 取 x 和 y 中的最小值 
    for (int i=z; i>=1; i--)
        if (x%i==0 && y%i==0) return i;
}

int Lcm(int x, int y)  // 最小公倍数 
{
    for (int i=1; i<=x; i++)
        if ( i*y % x == 0) return i*y;        
}

int main()
{
    int a, b;
    
    int (* pf)(int, int); // 声明函数指针 

    cout << "Input a and b: ";
    cin >> a >> b;
    
    pf = Gcd; // pf 指向函数 Gcd     
    cout << "最大公约数：" << pf(a,b) << endl;
    
    pf = Lcm; // pf 指向函数 Lcm     
    cout << "最小公倍数：" << pf(a,b) << endl;

    cout << endl; 
	
	return 0;
}


