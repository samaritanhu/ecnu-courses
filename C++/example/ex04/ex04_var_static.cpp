// 静态局部变量  
#include<iostream>
#include<ctime>

using namespace std; 

int k; // 全局变量，静态生存期，初值为 0 
 
int main()
{
    int x=5;
    
    cout << "k=" << k << "\n" << endl; // 没有初始化的静态变量自动赋值为 0 
    
    int my_plus(int x); // 函数声明     
    cout << "x+i=" << my_plus(x) << "\n" << endl;
    cout << "x+i=" << my_plus(x) << "\n" << endl;    
    
    return 0; 
}

int my_plus(int x)
{
    static int i=6;  
    // 静态局部变量，初值为 5；只能初始化一次，第二次调用该函数时不再初始化！ 
    
    i = x +i; 
    return i;
}
