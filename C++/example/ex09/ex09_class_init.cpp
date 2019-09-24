// 常量和引用的初始化 
#include<iostream>
#include<cmath> 

using namespace std; 

class Myclass 
{
public: 
    Myclass(int x, int y, int z);     
    void display();
	
private:  
    const int a;
    int & b;
    int c;
};

// 构造函数 
Myclass::Myclass(int x, int y, int z):a(x),b(y)
{
	c = z;  
}
// 也可以写为： 
// Myclass::Myclass(int x, int y, int z):a(x),b(y),c(z){}


void Myclass::display()
{
	cout << "a=" << a << ", b=" << b << ", c=" << c;
}

//主函数
int main ()
{
	Myclass mc(2,3,4);
	
	cout << "mc:";
	mc.display();
	 
    return 0; 
}
