// 常引用 
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
 
class Complex
{ 
  public:	
	Complex(double a, double b) {  x=a; y=b; } 
	double mydist(const Complex&);
	double mydistnew(Complex&);
	
  private:
	double x, y;
}; 

double Complex::mydist(const Complex& z)
{
	double xx = x - z.x;
	double yy = y - z.y;
	
	return sqrt(pow(xx,2)+pow(yy,2));
}

double Complex::mydistnew(Complex& z)
{
	double xx = x - z.x;
	double yy = y - z.y;
	
	return sqrt(pow(xx,2)+pow(yy,2));
}

int main()
{
    Complex a(2.5,3.8), b(-4.2,5.6);
    const Complex c(9.4,10.2);

    // 常引用 
	cout << "|a-b|=" << a.mydist(b) << endl;
	cout << "|a-c|=" << a.mydist(c) << endl;
	
	// 普通引用 
	cout << "|a-b|=" << a.mydistnew(b) << endl;
	// cout << "|a-c|=" << a.mydistnew(c) << endl;  // ERROR
		
	return 0;
}

