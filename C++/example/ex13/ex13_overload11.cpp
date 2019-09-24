// ���� << �� >> 
// ����ת�� 
#include <iostream>

using namespace std;

class Rational 
{ 
  public:
    Rational() { x=0; y=1; }
    Rational(int x, int y) { this->x=x; this->y=y; }
    friend ostream & operator<<(ostream &, const Rational &);
    friend istream & operator>>(istream &, Rational &);
    void display() { cout << x << "/" << y << endl; }
  
  private:
    int x, y; 
};

ostream & operator<<(ostream & out, const Rational & a) // �ⲿ���� ����ͨ������
{ 
    out << a.x << "/" << a.y;
    return out;
}

istream & operator>>(istream & in, Rational & a)
{
	cout << "Enter numerator: ";
	in >> a.x;
	cout << "Enter denomiator: ";
	in >> a.y;
	return in;
}

int main() 
{
    Rational a(1,2);
	
	// ��� 
	a.display();
	cout << a << endl;
	
	// ���� 
	cin >> a;
	cout << a << endl;
    
    return 0; 
}

