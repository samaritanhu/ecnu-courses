// 运算符重载：复数运算，非成员函数方式 
#include <iostream>

using namespace std;

class Complex 
{
  public: 
    Complex() { real=0.0; imag=0.0; }
    Complex(double r, double i) { real=r;imag=i; }  
    Complex(double r) { real=r; imag=0.0; }
    friend Complex operator+ (const Complex &, const Complex &);  // 非成员函数方式 
    void display();  
    
  private:    // 私有数据成员
    double real;    // 复数实部
    double imag;    // 复数虚部
};  

Complex operator+ (const Complex & c1, const Complex & c2)    // 注意：不是成员函数 
{
    return Complex(c1.real+c2.real, c1.imag+c2.imag);  
}

void Complex::display()
{
	if (imag>0)
		cout << real << " + " << imag << "i" << endl;
	else
		cout << real << " - " << -imag << "i" << endl;
}

int main() 
{
    Complex a(2.1,5.7), b(7.5,8), c, d, e;  
    
    cout << "a = "; a.display();
    cout << "b = "; b.display();
    
    c = a + b;
    cout<<"a + b = "; c.display();    
   
    d = b + 5.6;   
    cout<<"b + 5.6 = ";  d.display();

    e = 4.1 + a;   
    cout<<"4.1 + a = ";  e.display();
	
    return 0; 
}
