// 数据成员与局部变量 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Point	// Point 类的声明
{
public:	 // 外部接口
	Point(double a, double b)  // 构造函数
     { x=a; y=b; }	
	void myfun()
	{
		cout << "数据成员：x=" << x << endl;
		int x=10;
		cout << "局部变量：x=" << x << endl;
	} 
private:	// 私有数据
	int x, y;
};

// 主函数
int main()
{
	Point A(4,5);
	
    cout << "Point A: \n";     
	A.myfun();	
    
    cout << endl;

    return 0; 
}
