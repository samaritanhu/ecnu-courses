// 显示当前时间（时:分:秒）
#include <iostream>
#include <ctime>  
#include <iomanip>  

using namespace std;

int main()
{
	long Second, Minute, Hour;
  
	Second = time(NULL);
	Minute = Second / 60;
	Hour = Minute / 60;
  
	cout << setfill('0');
	cout << "当前北京时间是 ";
	cout << setw(2) << (Hour+8) % 24 << ":" 
		 << setw(2) << Minute % 60   << ":" 
		 << setw(2) << Second % 60 << endl ;
       
	return 0;
}

