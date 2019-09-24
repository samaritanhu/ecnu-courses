// ��������أ��������� 
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
    
  private:    // ˽�����ݳ�Ա
    double real;    // ����ʵ��
    double imag;    // �����鲿
};  

Complex Complex::operator+ (const Complex & c2)    // �������������ʵ��
{
    return Complex(real+c2.real, imag+c2.imag); // ����һ����ʱ����������Ϊ����ֵ
}

Complex Complex::operator+(double x)    // �������������ʵ��
{
    return Complex(real+x, imag);  // ����һ����ʱ����������Ϊ����ֵ
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