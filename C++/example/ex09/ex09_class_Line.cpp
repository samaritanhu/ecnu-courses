// 类的组合 
#include<iostream>
#include<cmath> 

using namespace std; 

class Point	// 声明类 Point 
{
public:	// 外部接口
    Point(double newx=0, double newy=0)  // 构造函数
		{ x = newx; y = newy; }     
    void setpoint(double, double);	// 设置点的坐标 
    double getx() {return x;}		// 获取横坐标
	double gety() {return y;}  		// 获取纵坐标 
	
private: //私有数据成员
    double x, y;
};

class Line	// 声明类 Line 
{
public:	// 外部接口
    Line(double xA, double yA, double xB, double yB):A(xA, yA),B(xB,yB) {};  // 构造函数
    void setline(Point &, Point &);	  // 设置两个端点 
    double getlength();   // 计算线段的长度 

private: //私有数据成员
    Point A, B;
};

void Line::setline(Point & newA, Point & newB)  // 设置两个端点 
{
	A = newA; B = newB;
}

double Line::getlength() // 计算线段的长度
{
	double xx, yy;	
	xx = B.getx() - A.getx();
	yy = B.gety() - A.gety();
	return sqrt(xx*xx+yy*yy);
}

//主函数
int main ()
{
	Line AB(1,2,4,6);
	 
	cout << "线段长度: " << AB.getlength() << endl;

    return 0; 
}
