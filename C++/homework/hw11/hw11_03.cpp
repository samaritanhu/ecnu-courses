// ÔËËã·ûÖØÔØ£º>  ==  < 
#include <iostream>

using namespace std;

class Rational 
{ 
  public:
    Rational() { x=0; y=1; }
    Rational(int x, int y) { this->x=x; this->y=y; }
    void Display() { cout << x << "/" << y << endl; }
    bool operator>(const Rational&);
    bool operator==(const Rational&);
    bool operator<(const Rational&);
  
  private:
    int x, y; 
};

bool Rational::operator>(const Rational& b)
{
	if (x*b.y > y*b.x)
		return true;
	else
		return false;
}
bool Rational::operator==(const Rational& b)
{
	if (x*b.y == y*b.x)
		return true;
	else
		return false;
}
bool Rational::operator<(const Rational& b)
{
	if (x*b.y < y*b.x)
		return true;
	else
		return false;
}

int main() 
{
    Rational a(4,5), b(2,3); 
	    
    cout << "a="; a.Display();
    cout << "b="; b.Display();
    
    cout << "a>b? "  << (a>b ? "true" : "false") << endl;
    cout << "a==b? " << (a==b ? "true" : "false") << endl;
    cout << "a<b? "  << (a<b ? "true" : "false") << endl;
    
    return 0; 
}
