// �����๹�캯�� 
#include <iostream>
#include <cstdlib>

using namespace std;

class B1	//��B1�����캯���в���
{
public:
	B1(int i) {cout<<"constructing B1 "<<i<<endl;}
};

class B2	//��B2�����캯���в���
{
public:
	B2(int j) {cout<<"constructing B2 "<<j<<endl;}
};

class B3	//��B3�����캯���޲���
{
public:
	B3(){cout<<"constructing B3 *"<<endl;}
};

class C: public B2, public B1, public B3	//��������C
//ע�⸸������˳��
{
public:	//������Ĺ��г�Ա
	C(int a, int b, int c, int d):B1(a),memberB2(d),memberB1(c),B2(b)
	{	x = a; }
	//ע�⸸�����ĸ�����˳��
	//ע���Ա�������ĸ�����˳��
	void Showx() {cout << "x=" << x << endl; }
private:	//�������˽�ж����Ա
	B1 memberB1;
	B2 memberB2;
	B3 memberB3;
	int x;
};

int main()
{
	C obj(1,2,3,4);
	
	cout << endl;
	obj.Showx();
	
	cout << endl;

	return 0;
}
