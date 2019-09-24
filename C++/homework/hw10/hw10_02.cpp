// MyDate 
#include <iostream>
#include <ctime>

using namespace std;

class MyDate
{
	public:		
		MyDate(unsigned long second=time(0));
		
		MyDate(int year, int month, int day)
		{ this->year = year; this->month = month; this->day = day; }
		
		void showDay()
		{ cout << year << "-" << month << "-" << day << endl; }		
	
	private:
		int year, month, day;
};

bool is_leapyear(int year)
{   return ( (year%4==0)&&(year%100!=0) ) || (year%400==0); }

MyDate::MyDate(unsigned long second) 
{ 
	int day_per_year = 365;
	long elapsed_day = 0;
	
	day = (second/3600+8)/24 + 1;  // 北京时间 
	year = 1970;	
	
	while (true)
	{
		day = day - 365;
		if (is_leapyear(year))  day--;
		if (day<0)	break;	
		year++;		
	}
	day = day + 365;
	if (is_leapyear(year))  day++;
	
	int Days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if (is_leapyear(year))  Days[1]=Days[1]+1; 
	
	for(int k=0; k<12; k++)
	{
		day -= Days[k];
		if (day < 0)
		{
			month = k+1;
			day += Days[k];
			break;
		}
	}	
}

int main()
{
  	MyDate d1;
  	MyDate d2(3456201512ul);
  	
 	d1.showDay();
 	d2.showDay();
 	
	return 0;
}
