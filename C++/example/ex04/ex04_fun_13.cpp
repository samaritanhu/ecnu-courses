// ���� 
#include <iostream>

using namespace std;
 
int main()
{
	int a;
	int &ra = a; // ����һ��ָ�� a ������ 
	
	a = 3;
	cout << "a=" << a << endl;
	
	ra = 5;  // ra �� a ����ͬһ���洢�ռ� 
	cout << "a=" << a << endl;
	
	return 0;
}
