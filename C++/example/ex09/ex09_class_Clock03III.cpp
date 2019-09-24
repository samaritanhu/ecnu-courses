// 对象作为函数参数  
#include<iostream>
#include <cstdlib>

using namespace std; 

class Clock	  // 时钟类的声明
{
public:	// 外部接口，公有成员函数
    Clock(int x, int y, int z);
    Clock()
    { hour=0; minute=0; second=0;};
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

inline void Clock::showTime()
{   cout << hour << ":" << minute << ":" << second << endl; }

// 普通函数（不是 Clock 的函数成员）
void printTime(Clock & c)
{ 
    cout << "The time is: ";
    c.showTime();
}
 
// 主函数
int main()
{
	Clock c1(16,30,0);	// 声明对象 
	
	cout << "直接通过对象调用函数成员：\n";
	c1.showTime();
	
	cout << "对象作为普通函数的参数：\n";
	printTime(c1);
    
    cout << endl;

//    system("pause");
    return 0; 
}
