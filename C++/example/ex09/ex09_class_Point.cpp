// 复制构造函数 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point 类的声明
{
public:	 // 外部接口
	Point(int a=0, int b=0)  // 构造函数
     { x=a; y=b; }	
	Point(const Point &);	 // 复制构造函数
	// Point(const Point & p) {x=p.x; y=p.y;}
	int Getx() {return x;}
	int Gety() {return y;}
private:	// 私有数据
	int x, y;
};

// 复制构造函数
Point::Point( const Point & p)
{
	x=p.x;
	y=p.y;
	cout << "自定义复制构造函数被调用！" << endl;
}

// 形参为 Point 类对象的函数
void f(Point p)
{	
    cout << "x=" << p.Getx() << endl;
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
	Point A(4,5);	//第一个对象A
	
    // 情况一：用A初始化B，调用自定义复制构造函数
    cout << "Point B(A): ";
	Point B(A); // 或 Point B=A; 
	cout << "x=" << B.Getx() << endl << endl;
	
	// 情况二：对象B作为函数的实参，调用自定义复制构造函数
    cout << "f(B): ";
    f(B);  
    cout << endl;
    
    // 自定义的复制构造函数不改变赋值号的行为： 
	// 赋值号出现在普通表达式中时，调用默认的复制构造函数！
    cout << "C=A: ";
	Point C;
	C=A;  // 赋值：调用默认的复制构造函数
	cout << "x=" << C.Getx() << endl << endl;

    cout << "C=g(): ";		 
	C=g();  // 赋值：调用默认的复制构造函数 
	cout << "x=" << C.Getx() << endl;
    
    cout << endl;

    return 0; 
}
