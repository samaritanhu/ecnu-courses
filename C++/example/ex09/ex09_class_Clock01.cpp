// ������� 
#include<iostream>
#include <cstdlib>

using namespace std; 

class Clock	  // ʱ���������
{
public:	// �ⲿ�ӿڣ����г�Ա����
    void setTime(int NewH=0, int NewM=0, int NewS=0);
	void showTime();
	
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

//��Ա�����Ķ��壨ʱ�����Ա�����ľ���ʵ�֣� 
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

// ������
int main()
{
	Clock myClock;	// ������� myClock
	
	cout<<"First time: "<<endl;
	myClock.setTime();	// ����ʱ��ΪĬ��ֵ
	myClock.showTime();	// ��ʾʱ��
	
    cout<<"\nSecond time: "<<endl;
	myClock.setTime(16,10,28);	// ����ʱ��Ϊ 16:10:28
	myClock.showTime();	// ��ʾʱ��

    cout << endl;

    return 0; 
}
