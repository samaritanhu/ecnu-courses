// 局部变量与全局变量 
#include <iostream>
#include <ctime>

using namespace std; 

int main()
{
    int i=5, x, y;  // 局部变量 
    
    extern int k;  // 声明 
    
    x = i + k;
    cout << "x=" << x << "\n" << endl;
    
    int my_power(int x);
    y = my_power(x);
    cout << "y=" << y << "\n" << endl;
    
    return 0; 
}

int k = 2;  // 全局变量 

int my_power(int x)
{
    int y = 1;
    
    for (int i=1; i<=k; i++)
        y = y * x;
        
    return  y;
}
