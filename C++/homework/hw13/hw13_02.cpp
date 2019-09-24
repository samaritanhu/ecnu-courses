// 重载复数类的输出操作符 << 和输入操作符 >>
#include <iostream>
#include <cmath>

using namespace std;

class Complex
{ 
  public:	
	Complex() {  x=0; y=0; } // 无参数构造函数 	
	Complex(double newx, double newy)  // 带参数构造函数 
		{ x = newx; y = newy; }	
    friend ostream & operator<<(ostream &, const Complex &);
    friend istream & operator>>(istream &, Complex &);
	
  private:
	double x, y;
}; 

ostream & operator<<(ostream & out, const Complex & z) // 外部函数 （普通函数）
{ 
    out << z.x << ((z.y>0)?" + ":" - ") << fabs(z.y) << "i";
    return out;
}

istream & operator>>(istream & in, Complex & z)
{
	cout << "Enter real part: ";
	in >> z.x;
	cout << "Enter imaginary part: ";
	in >> z.y;
}

int main() 
{
    Complex z(3,-4);
	
	// 输出 
	cout << z << endl;
	
	// 输入 
	cin >> z;
	cout << z << endl;
    
    return 0; 
}

