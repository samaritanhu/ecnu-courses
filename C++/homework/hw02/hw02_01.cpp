// Բ����ı���������
#include <iostream>
#include <cmath>

using namespace std;

const double PI=3.14159265;

int main()
{
	double r, h, S, V;
  
	cout << "������Բ����İ뾶�͸�:\n";
	cin >> r >> h;  

	S = 2*PI*r*r + 2*PI*r*h;  // ����� 
	V = r*r*PI*h;           // ��� 

	cout << "�����Ϊ��" << S << endl; 
	cout << "  ���Ϊ��" << V << endl;
  
	return 0;
}


