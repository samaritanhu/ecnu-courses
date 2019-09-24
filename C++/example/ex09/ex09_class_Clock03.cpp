// ���캯�� 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Clock	  // ʱ���������
{
public:	// �ⲿ�ӿڣ����г�Ա����
    Clock(int x, int y, int z);
    Clock()
    { hour=16; minute=30; second=0;};
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

inline void Clock::showTime() // ������Ա����
{   cout << hour << ":" << minute << ":" << second << endl; }

// ������
int main()
{
	Clock c1(0,0,0);	// �������� 
	
	cout<<"First time: "<<endl;
	c1.showTime();	// ��ʾʱ��
	
    cout<<"\nSecond time: "<<endl;
	c1.setTime(16,10,28);	// ����ʱ��Ϊ 16:10:28
	c1.showTime();	// ��ʾʱ��

	Clock c2; // ERROR
    cout<<"\n���캯������: "<<endl;
    c2.showTime();	// ��ʾʱ��
    
    cout << endl;

    return 0; 
}
