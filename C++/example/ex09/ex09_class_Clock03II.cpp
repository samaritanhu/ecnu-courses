// �������� 
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

// ������
int main()
{
	Clock c1, c2;	// �������� 
	
	cout << "����������" ;
	c1=Clock(); // ʹ�ò��������Ĺ��캯�� 
	c1.showTime(); 
	
	cout << "��������" ;
	c2=Clock(16,16,16); // ������ 
	c2.showTime(); 
    
    cout << endl;

//    system("pause");
    return 0; 
}
