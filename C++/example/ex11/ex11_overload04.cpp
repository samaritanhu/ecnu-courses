// дЫЫуЗћжидиЃК[] 
#include <iostream>

using namespace std;

class Rational 
{ 
  public:
    Rational() { x=0; y=1; }
    Rational(int x, int y) { this->x=x; this->y=y; }
    void display() { cout << x << "/" << y << endl; }
    int & operator[](int idx);
  
  private:
    int x, y; 
};

int & Rational::operator[](int idx)
{
	if (idx == 0)
		return x;
	else
		return y;
}

int main() 
{
    Rational a(4,5); 
	    
    cout<<"a="; a.display();
    
    cout << a[0] << endl;
	cout << a[1] << endl;
	
	a[0]=3; a[1]=2; a.display();
	 
    return 0; 
}
