// 逗号表达式 
#include<iostream>

using namespace std; 

int main()
{
    int  a=2, b;
    
    a = 3*5, a+10; // 注意：逗号运算符的级别最低 
    b = (3*5, a+10);
    
    cout << "a=" << a << endl; 
    cout << "b=" << b << endl; 
    
    return 0; 
}
