// ���ݳ�Ա��ֲ�����, this ָ�� 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point �������
{
public:	 // �ⲿ�ӿ�
	Point(int a=0, int b=0)  // ���캯��
     { x=a; y=b; }	
	int Getx() {return x;}
	int Gety() {return y;}
	void p()
	{
		int x=10;
		cout << "�ֲ�������x=" << x << endl;
		cout << "���ݳ�Ա��x=" << this->x << endl;
	} 
	void Setx(int x) { this->x=x; } 
private:	// ˽������
	int x, y;
};

// ������
int main()
{
	Point A(4,5), B(8,0);
	
    cout << "Point A: \n";     
	A.p();	
	
    cout << "Point B: \n"; 
    B.p();

    B.Setx(55);
	cout << "Point B: \n"; 
    B.p();
	    
    cout << endl;

    return 0; 
}
