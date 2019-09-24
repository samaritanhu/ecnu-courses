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
    Line(Point & newA, Point & newB)  // ���캯��
		{ A = newA; B = newB; }     
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
	Point P1(1,2), P2(4,6);
	Line AB(P1,P2);
	 
	cout << "�߶γ���: " << AB.getlength() << endl;

    return 0; 
}
