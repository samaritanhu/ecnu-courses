// 类与对象
// Complex 类的实现 
#include <iostream> 
#include <cmath>

using namespace std;
 
class Complex
{ 
  public:	
	Complex(double newx, double newy) 
		{ x = newx; y = newy; }	
	double getx() { return x; }	
	double gety() { return y; }
	void Display();
	double Abs();
	Complex Minus( const Complex& );
	
  private:
	double x, y;
}; 

double Complex::Abs()
{
	return sqrt(x*x+y*y);
}

void Complex::Display()
{
	cout << x << ((y>0)?" + ":" - ") << fabs(y) << "i"; 
}

Complex Complex::Minus(const Complex& z)
{
	return Complex(x-z.x,y-z.y);
}

int main()
{
    Complex a(1.4,-2.3), b(-3.5,2.7);

	cout << "|a| = " << a.Abs() << endl;

	Complex c = b.Minus(a);
	cout << "b-a = ";
	a.Display();
	cout << endl;
			
	return 0;
}

