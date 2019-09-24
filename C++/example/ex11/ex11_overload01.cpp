// 运算符重载：有理数加法运算 
#include <iostream>

using namespace std;

class Rational 
{ 
  public:
    Rational() { x=0; y=1; }
    Rational(int x, int y) { this->x=x; this->y=y; }
    Rational operator+(const Rational & p);
    void Display() { cout << x << "/" << y << endl; }
  
  private:
    int x, y; 
};

Rational Rational::operator+(const Rational & p)
{
    int newx = x*p.y + y*p.x;
    int newy = y*p.y;
    return Rational(newx, newy);
}

int main() 
{
    Rational a(4,5), b(7,3), c; 
	    
    cout<<"a="; a.Display();    
    cout<<"b="; b.Display();
    
    c = a + b;   // 使用重载运算符完成有理数加法
    cout<<"a+b=";  c.Display();
    
    return 0; 
}
