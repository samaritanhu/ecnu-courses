// 数据成员与局部变量, this 指针 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point 类的声明
{
public:	 // 外部接口
	Point(int a=0, int b=0)  // 构造函数
     { x=a; y=b; }	
	int Getx() {return x;}
	int Gety() {return y;}
	void p()
	{
		int x=10;
		cout << "局部变量：x=" << x << endl;
		cout << "数据成员：x=" << this->x << endl;
	} 
	void Setx(int x) { this->x=x; } 
private:	// 私有数据
	int x, y;
};

// 主函数
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
