// ���캯�� 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Clock	  // ʱ���������
{
public:	// �ⲿ�ӿڣ����г�Ա����
    Clock(int x=10, int y=10, int z=10);
    void setTime(int NewH=0, int NewM=0, int NewS=0);
    void showTime();
	
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

//��Ա�����Ķ��壨ʱ�����Ա�����ľ���ʵ�֣� 
Clock::Clock(int x, int y, int z)
{	hour=x;  minute=y; 	second=z; }

void Clock::setTime(int NewH, int NewM, int NewS)
{	hour=NewH;  minute=NewM;  second=NewS; }

inline void Clock::showTime()
{   cout << hour << ":" << minute << ":" << second << endl; }

// ������
int main()
{
	Clock c1; 
	
	cout<<"First time: "<<endl;
	c1.showTime();	// ��ʾʱ��
	
    cout<<"\nSecond time: "<<endl;
	c1.setTime(16,10,28);	// ����ʱ��Ϊ 16:10:28
	c1.showTime();	// ��ʾʱ��
	cout << endl;

//	Clock c2(); c2.showTime();  // ERROR
	Clock c3; c3.showTime(); // OK

    cout << endl;

    return 0; 
}
