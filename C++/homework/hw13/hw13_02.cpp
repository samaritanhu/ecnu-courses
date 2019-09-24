// ���ظ��������������� << ����������� >>
#include <iostream>
#include <cmath>

using namespace std;

class Complex
{ 
  public:	
	Complex() {  x=0; y=0; } // �޲������캯�� 	
	Complex(double newx, double newy)  // ���������캯�� 
		{ x = newx; y = newy; }	
    friend ostream & operator<<(ostream &, const Complex &);
    friend istream & operator>>(istream &, Complex &);
	
  private:
	double x, y;
}; 

ostream & operator<<(ostream & out, const Complex & z) // �ⲿ���� ����ͨ������
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
	
	// ��� 
	cout << z << endl;
	
	// ���� 
	cin >> z;
	cout << z << endl;
    
    return 0; 
}

