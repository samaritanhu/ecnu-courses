// �������
// Rectangle ���ʵ�� 
#include <iostream> 

using namespace std;
 
class Rectangle
{ 
  public:	
	Rectangle()  // �޲������캯�� 
		{  width=1.0;  height=1.0; }	
	Rectangle(double x, double y)  // ���������캯�� 
		{  width=x;  height=y; }	
	void setwh(double x, double y) {width=x; height=y; }	
	double getw() {return width; }	
	double geth() {return height; }	
	double getArea() { return width*height; }	
	double getPerimeter() { return 2*(width+height); }
		
  private:
	double width, height;
}; 

int main()
{
    Rectangle R1(4,40), R2(3.5,35.9);

	cout << "R1: ";
	cout << "Area=" << R1.getArea() << ", ";
	cout << "Perimeter=" << R1.getPerimeter() << endl;
	
	cout << "R2: ";
	cout << "Area=" << R2.getArea() << ", ";
	cout << "Perimeter=" << R2.getPerimeter() << endl;
		
	return 0;
}

