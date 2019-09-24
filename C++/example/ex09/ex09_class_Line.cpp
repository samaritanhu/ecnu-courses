// ������ 
#include<iostream>
#include<cmath> 

using namespace std; 

class Point	// ������ Point 
{
public:	// �ⲿ�ӿ�
    Point(double newx=0, double newy=0)  // ���캯��
		{ x = newx; y = newy; }     
    void setpoint(double, double);	// ���õ������ 
    double getx() {return x;}		// ��ȡ������
	double gety() {return y;}  		// ��ȡ������ 
	
private: //˽�����ݳ�Ա
    double x, y;
};

class Line	// ������ Line 
{
public:	// �ⲿ�ӿ�
    Line(double xA, double yA, double xB, double yB):A(xA, yA),B(xB,yB) {};  // ���캯��
    void setline(Point &, Point &);	  // ���������˵� 
    double getlength();   // �����߶εĳ��� 

private: //˽�����ݳ�Ա
    Point A, B;
};

void Line::setline(Point & newA, Point & newB)  // ���������˵� 
{
	A = newA; B = newB;
}

double Line::getlength() // �����߶εĳ���
{
	double xx, yy;	
	xx = B.getx() - A.getx();
	yy = B.gety() - A.gety();
	return sqrt(xx*xx+yy*yy);
}

//������
int main ()
{
	Line AB(1,2,4,6);
	 
	cout << "�߶γ���: " << AB.getlength() << endl;

    return 0; 
}
