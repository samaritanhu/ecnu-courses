// 派生类构造函数 
#include <iostream>
#include <cstdlib>

using namespace std;

class B1	//类B1，构造函数有参数
{
public:
	B1(int i) {cout<<"constructing B1 "<<i<<endl;}
};

class B2	//类B2，构造函数有参数
{
public:
	B2(int j) {cout<<"constructing B2 "<<j<<endl;}
};

class B3	//类B3，构造函数无参数
{
public:
	B3(){cout<<"constructing B3 *"<<endl;}
};

class C: public B2, public B1, public B3	//派生新类C
//注意父类名的顺序
{
public:	//派生类的公有成员
	C(int a, int b, int c, int d):B1(a),memberB2(d),memberB1(c),B2(b)
	{	x = a; }
	//注意父类名的个数与顺序
	//注意成员对象名的个数与顺序
	void Showx() {cout << "x=" << x << endl; }
private:	//派生类的私有对象成员
	B1 memberB1;
	B2 memberB2;
	B3 memberB3;
	int x;
};

int main()
{
	C obj(1,2,3,4);
	
	cout << endl;
	obj.Showx();
	
	cout << endl;

	return 0;
}
