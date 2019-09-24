// 构造函数 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Clock	  // 时钟类的声明
{
public:	// 外部接口，公有成员函数
    Clock(int x, int y, int z);
    Clock()
    { hour=16; minute=30; second=0;};
    void setTime(int NewH=0, int NewM=0, int NewS=0);
	void showTime();
	
private:	//私有数据成员
	int hour, minute, second;
};

//成员函数的定义（时钟类成员函数的具体实现） 
Clock::Clock(int x, int y, int z)
{	hour=x;  minute=y; 	second=z;  }

void Clock::setTime(int NewH, int NewM, int NewS)
{	hour=NewH;  minute=NewM;  second=NewS; }

inline void Clock::showTime() // 内联成员函数
{   cout << hour << ":" << minute << ":" << second << endl; }

// 主函数
int main()
{
	Clock c1(0,0,0);	// 声明对象 
	
	cout<<"First time: "<<endl;
	c1.showTime();	// 显示时间
	
    cout<<"\nSecond time: "<<endl;
	c1.setTime(16,10,28);	// 设置时间为 16:10:28
	c1.showTime();	// 显示时间

	Clock c2; // ERROR
    cout<<"\n构造函数重载: "<<endl;
    c2.showTime();	// 显示时间
    
    cout << endl;

    return 0; 
}
