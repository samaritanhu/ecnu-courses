// ��ʾ��ǰʱ�䣨ʱ:��:�룩
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
	cout << "��ǰ����ʱ���� ";
	cout << setw(2) << (Hour+8) % 24 << ":" 
		 << setw(2) << Minute % 60   << ":" 
		 << setw(2) << Second % 60 << endl ;
       
	return 0;
}

