// 运算符重载：前置和后置单目运算 
#include <iostream>
#include <iomanip>

using namespace std;

class Clock	//时钟类声明
{
public:	//外部接口
	Clock(int H=0, int M=0, int S=0);
	void showTime() const;
	Clock operator++();	//前置单目运算符重载
	Clock operator++(int);	//后置单目运算符重载
private:	//私有数据成员
	int hour, minute, second;
};

Clock::Clock(int H, int M, int S)	//构造函数
{
	if(0<=H && H<24 && 0<=M && M<60 && 0<=S && S<60)
	{   hour = H;
	    minute = M;
	    second = S;
	}
	else
	    cout<<"Time error!"<<endl;
}

void Clock::showTime() const	//显示时间函数
{
	cout.fill('0');
	cout << setw(2) << hour << ":" 
	     << setw(2) << minute << ":" 
		 << setw(2) << second << endl;
}

Clock Clock::operator++()	//前置单目运算符重载函数
{
	second++;
	if(second >= 60)
	{
	    second -= 60;
	    minute++;
	    if(minute >= 60)
	    {
	        minute -= 60;
	        hour = (++hour) % 24;
	     }
	}
	return *this;
}

Clock Clock::operator++(int)	//后置单目运算符重载
{		//注意形参表中的整型参数
	Clock old=*this;
	++(*this); // 调用前置++ 
	return old;
}

int main()
{
	Clock myClock(23,59,59);

	cout<<"First time output:";
	myClock.showTime();
	
	cout<<"Show myClock++ : ";
	(myClock++).showTime();

	cout<<"Show ++myClock : ";
	(++myClock).showTime();
	
    cout << endl;    

//    system("pause");
    return 0; 
}
