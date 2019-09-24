// ��������أ�ǰ�úͺ��õ�Ŀ���� 
#include <iostream>
#include <iomanip>

using namespace std;

class Clock	//ʱ��������
{
public:	//�ⲿ�ӿ�
	Clock(int H=0, int M=0, int S=0);
	void showTime() const;
	Clock operator++();	//ǰ�õ�Ŀ���������
	Clock operator++(int);	//���õ�Ŀ���������
private:	//˽�����ݳ�Ա
	int hour, minute, second;
};

Clock::Clock(int H, int M, int S)	//���캯��
{
	if(0<=H && H<24 && 0<=M && M<60 && 0<=S && S<60)
	{   hour = H;
	    minute = M;
	    second = S;
	}
	else
	    cout<<"Time error!"<<endl;
}

void Clock::showTime() const	//��ʾʱ�亯��
{
	cout.fill('0');
	cout << setw(2) << hour << ":" 
	     << setw(2) << minute << ":" 
		 << setw(2) << second << endl;
}

Clock Clock::operator++()	//ǰ�õ�Ŀ��������غ���
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

Clock Clock::operator++(int)	//���õ�Ŀ���������
{		//ע���βα��е����Ͳ���
	Clock old=*this;
	++(*this); // ����ǰ��++ 
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
