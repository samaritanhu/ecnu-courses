// ����ת���������������� --> ���� 
#include <iostream>
#include <cstdlib>

using namespace std;

class Rational 
{ 
  public:
    Rational() { x=0; y=1; }
    Rational(int x, int y) { this->x=x; this->y=y; }
    Rational(int x) {this->x=x; y=1; };
    Rational operator+(const Rational &); // һ��Ҫ�� const ! 
    void display() { cout << x << "/" << y << endl; }
  
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
    Rational a(1,2), b;
	int c=3;
	
	b = a + c;  // ע��c ֻ�ܳ����ڼӺ��ұߣ� 
	    
    cout<<"b="; b.display(); 
    
    return 0; 
}
