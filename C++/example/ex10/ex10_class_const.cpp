// �����󣬳���Ա�����������ݳ�Ա 
#include<iostream>
#include<cmath> 

using namespace std; 

class Myclass 
{
public: 
    Myclass(int x, int y);     
    void display() const;
    void show();
	
private:  
    const int a;
    int b;
};

// ���캯�� 
Myclass::Myclass(int x, int y): a(x)
{
   b = y;  
}
// Ҳ����дΪ�� Myclass::Myclass(int x, int y):a(x),b(y) { }
// �������ǣ� Myclass::Myclass(int x, int y) { a = x; b = y; }


void Myclass::display() const
{
	cout << "a=" << a << ", b=" << b << endl;
}

void Myclass::show()
{
	cout << "a=" << a << ", b=" << b << endl;
}
//������
int main ()
{
	Myclass obj1(2,3);
	const Myclass obj2(4,5);
	Myclass const obj3(6,7) ;
	
	// ����Ա���� 
	cout << "obj1:";  obj1.display();
	cout << "obj2:";  obj2.display();
	cout << "obj3:";  obj3.display();
	 
	// ��ͨ��Ա���� 
	cout << "obj1:";  obj1.show();
	// cout << "obj2:";  obj2.show();  // ERROR
	// cout << "obj3:";  obj3.show();  // ERROR

    return 0; 
}
