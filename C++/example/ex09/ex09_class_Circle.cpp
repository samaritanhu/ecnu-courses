// 类举例
#include<iostream>
#include <cstdlib>

using namespace std; 

const float pi=3.1415927;	// 给出 pi 的值
const float price1=35.0;	// 栅栏的单价
const float price2=20.0;	// 过道造价

class Circle	// 声明类 Circle 
{
public:	// 外部接口
    Circle(float x)	{ r=x; } // 构造函数    
    float Circum();	// 计算圆周长
    float Area();	//计算圆面积
private:	//私有数据成员
    float r;
};

// 成员函数 
float Circle::Circum()	// 计算圆的周长
{
    return 2*pi*r;
}
float Circle::Area()	// 计算圆的面积 
{
    return pi*r*r;
}

//主函数
int main ()
{
	float x, y, z; 
	
	cout << "输入游泳池半径：";	 // 提示用户输入半径
	cin >> x;
	
	Circle Pool(x);  	// 声明 Circle 对象
	Circle PoolRim(x+3);
	
    // 计算栅栏造价并输出
    y=PoolRim.Circum()*price1;    
    cout << "栅栏造价为：" << y << endl;
    
    //  计算过道造价并输出
    z=(PoolRim.Area()-Pool.Area())*price2;
    cout << "过道的造价为：" << z << endl;
    
    cout << endl;

    return 0; 
}
