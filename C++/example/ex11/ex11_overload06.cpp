// ÀàĞÍ×ª»» 
#include <iostream>
#include <cstdlib>

using namespace std;

class Rational 
{ 
  public:
    Rational() { x=0; y=1; }
    Rational(int x, int y) { this->x=x; this->y=y; }
    operator double();
    void display() { cout << x << "/" << y << endl; }
  
  private:
    int x, y; 
};

Rational::operator double()
{ 
    return double(x)/y;
}

int main() 
{
    Rational a(1,2);
	double b=0.8, c;
	
	c = a + b; 
	    
    cout<<"c=" << c << endl; 
    
    return 0; 
}
