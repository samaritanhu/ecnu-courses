// ���ƹ��캯�� 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point �������
{
public:	 // �ⲿ�ӿ�
	Point(int x0=0, int y0=0)  // ���캯��
     { x=x0; y=y0; }	
//	Point(Point &p){x=p.x;y=p.y;}	 // ���ƹ��캯��
	int Getx() {return x;}
	int Gety() {return y;}
private:	// ˽������
	int x, y;
};

// �β�Ϊ Point �����ĺ���
void f(Point p)
{	
    cout << p.Getx() << endl;
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
	Point A, B;	//��һ������A
	
 
    // ������������ķ���ֵ������󣬺�������ʱ�����ÿ������캯��
	B=g();   
	cout << B.Getx() << endl;
    
    cout << endl;

    return 0; 
}
