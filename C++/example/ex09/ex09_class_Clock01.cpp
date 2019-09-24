// 类与对象 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Clock	  // 时钟类的声明
{
public:	// 外部接口，公有成员函数
    void setTime(int NewH=0, int NewM=0, int NewS=0);
	void showTime();
	
private:	//私有数据成员
	int hour, minute, second;
};

//成员函数的定义（时钟类成员函数的具体实现） 
void Clock::setTime(int NewH, int NewM, int NewS)
{
	hour=NewH;
	minute=NewM;
	second=NewS;
}

inline void Clock::showTime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

// 主函数
int main()
{
	Clock myClock;	// 定义对象 myClock
	
	cout<<"First time: "<<endl;
	myClock.setTime();	// 设置时间为默认值
	myClock.showTime();	// 显示时间
	
    cout<<"\nSecond time: "<<endl;
	myClock.setTime(16,10,28);	// 设置时间为 16:10:28
	myClock.showTime();	// 显示时间

    cout << endl;

    return 0; 
}
