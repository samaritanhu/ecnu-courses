// ���ݳ�Ա��ֲ����� 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point �������
{
public:	 // �ⲿ�ӿ�
	Point(double a, double b)  // ���캯��
     { x=a; y=b; }	
	void myfun()
	{
		cout << "���ݳ�Ա��x=" << x << endl;
		int x=10;
		cout << "�ֲ�������x=" << x << endl;
	} 
private:	// ˽������
	int x, y;
};

// ������
int main()
{
	Point A(4,5);
	
    cout << "Point A: \n";     
	A.myfun();	
    
    cout << endl;

    return 0; 
}
