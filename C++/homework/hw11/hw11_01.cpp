// 运算符重载：复数运算 
#include <iostream>

using namespace std;

class Complex 
{
  public: 
    Complex() { real=0.0; imag=0.0; }
    Complex(double r, double i) { real=r;imag=i; }  
    Complex operator+ (const Complex & c2);  
    Complex operator+ (double x);  
    void display();  
    
  private:    // 私有数据成员
    double real;    // 复数实部
    double imag;    // 复数虚部
};  

Complex Complex::operator+ (const Complex & c2)    // 重载运算符函数实现
{
    return Complex(real+c2.real, imag+c2.imag); // 创建一个临时无名对象作为返回值
}

Complex Complex::operator+(double x)    // 重载运算符函数实现
{
    return Complex(real+x, imag);  // 创建一个临时无名对象作为返回值
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
    Complex a(2.1,5.7), b(7.5,8), c, d;  
    
    cout << "a = "; a.display();
    cout << "b = "; b.display();
    
    c = a + b;
    cout<<"a + b = "; c.display();    
   
    d = b + 5.6;   
    cout<<"b + 5.6 = ";  d.display();
	
    return 0; 
}
