// 复数类 
#include <iostream>
#include <cmath>

using namespace std; 

class Complex
{ 
  public:	
    Complex() { x=0; y=0; }  	
    Complex(double a, double b) { x=a; y=b; }	
    double getx() { return x; }	
    double gety() { return y; }
    double mydist( Complex& );
  
  private:
    double x, y;
}; 

double Complex::mydist(Complex& z)
{  
   	double xx = x - z.x;
   	double yy = y - z.y;
  	return sqrt(pow(xx,2)+pow(yy,2));
}

double mydist(Complex& z1, Complex& z2)
{  
	double xx = z1.getx() - z2.getx();
   	double yy = z1.gety() - z2.gety();
   	return sqrt(pow(xx,2)+pow(yy,2));
}

int main()
{
   Complex a(2.5,3.8), b(-4.2,5.6);

   cout << "成员函数：";
   cout <<"|a-b|="<< a.mydist(b) <<endl;
		
   cout << "外部函数：";
   cout <<"|a-b|="<< mydist(a,b) <<endl;

   return 0;
}

