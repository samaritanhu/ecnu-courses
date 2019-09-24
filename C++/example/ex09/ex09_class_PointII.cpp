// 复制构造函数 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point 类的声明
{
public:	 // 外部接口
	Point(int x0=0, int y0=0)  // 构造函数
     { x=x0; y=y0; }	
//	Point(Point &p){x=p.x;y=p.y;}	 // 复制构造函数
	int Getx() {return x;}
	int Gety() {return y;}
private:	// 私有数据
	int x, y;
};

// 形参为 Point 类对象的函数
void f(Point p)
{	
    cout << p.Getx() << endl;
}

// 返回值为 Point 类对象的函数
Point g()
{
	Point A(1,2);
	return A;
}

// 主函数
int main()
{
	Point A, B;	//第一个对象A
	
 
    // 情况三：函数的返回值是类对象，函数返回时，调用拷贝构造函数
	B=g();   
	cout << B.Getx() << endl;
    
    cout << endl;

    return 0; 
}
