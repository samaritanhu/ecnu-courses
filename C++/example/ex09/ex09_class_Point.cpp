// ���ƹ��캯�� 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point �������
{
public:	 // �ⲿ�ӿ�
	Point(int a=0, int b=0)  // ���캯��
     { x=a; y=b; }	
	Point(const Point &);	 // ���ƹ��캯��
	// Point(const Point & p) {x=p.x; y=p.y;}
	int Getx() {return x;}
	int Gety() {return y;}
private:	// ˽������
	int x, y;
};

// ���ƹ��캯��
Point::Point( const Point & p)
{
	x=p.x;
	y=p.y;
	cout << "�Զ��帴�ƹ��캯�������ã�" << endl;
}

// �β�Ϊ Point �����ĺ���
void f(Point p)
{	
    cout << "x=" << p.Getx() << endl;
}

// ����ֵΪ Point �����ĺ���
Point g()
{
	Point A(1,2);
	return A;
}

// ������
int main()
{
	Point A(4,5);	//��һ������A
	
    // ���һ����A��ʼ��B�������Զ��帴�ƹ��캯��
    cout << "Point B(A): ";
	Point B(A); // �� Point B=A; 
	cout << "x=" << B.Getx() << endl << endl;
	
	// �����������B��Ϊ������ʵ�Σ������Զ��帴�ƹ��캯��
    cout << "f(B): ";
    f(B);  
    cout << endl;
    
    // �Զ���ĸ��ƹ��캯�����ı丳ֵ�ŵ���Ϊ�� 
	// ��ֵ�ų�������ͨ���ʽ��ʱ������Ĭ�ϵĸ��ƹ��캯����
    cout << "C=A: ";
	Point C;
	C=A;  // ��ֵ������Ĭ�ϵĸ��ƹ��캯��
	cout << "x=" << C.Getx() << endl << endl;

    cout << "C=g(): ";		 
	C=g();  // ��ֵ������Ĭ�ϵĸ��ƹ��캯�� 
	cout << "x=" << C.Getx() << endl;
    
    cout << endl;

    return 0; 
}
