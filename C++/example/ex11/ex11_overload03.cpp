// ��������أ��������������㣬�ⲿ������ʽ 
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

Rational operator-(const Rational &p1, const Rational &p2)  // �ⲿ���� ����ͨ������ 
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
    
    c = a - b;   // ʹ���������������������ӷ�
    cout<<"a-b=";  c.Display();
    
    return 0; 
}
