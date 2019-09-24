// 局部变量与全局变量 
#include<iostream>
#include<ctime>

using namespace std; 

int k = 2;  // 全局变量 

int main()
{
    int i=5, x;  // 局部变量 
    
    x = i + k;
    cout << "x=" << x << "\n" << endl;
    
    {
        int k = 16;
        x = i + k;
        cout << "x=" << x << "\n" << endl;         
    }
    
    x = i + k;
    cout << "x=" << x << "\n" << endl;
    
    return 0; 
}

