// �����
#include<iostream>
#include <cstdlib>

using namespace std; 

const float pi=3.1415927;	// ���� pi ��ֵ
const float price1=35.0;	// դ���ĵ���
const float price2=20.0;	// �������

class Circle	// ������ Circle 
{
public:	// �ⲿ�ӿ�
    Circle(float x)	{ r=x; } // ���캯��    
    float Circum();	// ����Բ�ܳ�
    float Area();	//����Բ���
private:	//˽�����ݳ�Ա
    float r;
};

// ��Ա���� 
float Circle::Circum()	// ����Բ���ܳ�
{
    return 2*pi*r;
}
float Circle::Area()	// ����Բ����� 
{
    return pi*r*r;
}

//������
int main ()
{
	float x, y, z; 
	
	cout << "������Ӿ�ذ뾶��";	 // ��ʾ�û�����뾶
	cin >> x;
	
	Circle Pool(x);  	// ���� Circle ����
	Circle PoolRim(x+3);
	
    // ����դ����۲����
    y=PoolRim.Circum()*price1;    
    cout << "դ�����Ϊ��" << y << endl;
    
    //  ���������۲����
    z=(PoolRim.Area()-Pool.Area())*price2;
    cout << "���������Ϊ��" << z << endl;
    
    cout << endl;

    return 0; 
}
