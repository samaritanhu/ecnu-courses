// 运算符重载：有理数减法运算，外部函数方式 
#include <iostream>
#include <cstdlib>

using namespace std;

class Rational 
{ 
  public:
    Rational() { x=0; y=1; }
    Rational(int x, int y) { this->x=x; this->y=y; }
    void Display() { cout << x << "/" << y << endl; }
    friend Rational operator-(const Rational &, const Rational &);
  
  private:
    int x, y; 
};

Rational operator-(const Rational &p1, const Rational &p2)  // 外部函数 （普通函数） 
{
    int newx = p1.x*p2.y - p1.y*p2.x;
    int newy = p1.y*p2.y;
    return Rational(newx, newy);
}

int main() 
{
    Rational a(4,5), b(7,3), c; 
	    
    cout<<"a="; a.Display();    
    cout<<"b="; b.Display();
    
    c = a - b;   // 使用重载运算符完成有理数加法
    cout<<"a-b=";  c.Display();
    
    return 0; 
}
