// ������Ϊ��������  
#include<iostream>
#include <cstdlib>

using namespace std; 

class Clock	  // ʱ���������
{
public:	// �ⲿ�ӿڣ����г�Ա����
    Clock(int x, int y, int z);
    Clock()
    { hour=0; minute=0; second=0;};
    void setTime(int NewH=0, int NewM=0, int NewS=0);
	void showTime();
	
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

//��Ա�����Ķ��壨ʱ�����Ա�����ľ���ʵ�֣� 
Clock::Clock(int x, int y, int z)
{	hour=x;  minute=y; 	second=z;  }

void Clock::setTime(int NewH, int NewM, int NewS)
{	hour=NewH;  minute=NewM;  second=NewS; }

inline void Clock::showTime()
{   cout << hour << ":" << minute << ":" << second << endl; }

// ��ͨ���������� Clock �ĺ�����Ա��
void printTime(Clock & c)
{ 
    cout << "The time is: ";
    c.showTime();
}
 
// ������
int main()
{
	Clock c1(16,30,0);	// �������� 
	
	cout << "ֱ��ͨ��������ú�����Ա��\n";
	c1.showTime();
	
	cout << "������Ϊ��ͨ�����Ĳ�����\n";
	printTime(c1);
    
    cout << endl;

//    system("pause");
    return 0; 
}
