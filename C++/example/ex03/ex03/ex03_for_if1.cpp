/*
  ��� 100 �� 200 ֮�����в��ܱ� 3 ���������ܱ� 7 �������� 
*/ 
#include <iostream>

using namespace std;

int main()
{
	int k;
	
	cout << "100��200֮�����в��ܱ�3���������ܱ�7���������У�" << endl;
	for (k = 100; k <= 200; k++)
		if ( k % 3 != 0 )
		    if ( k % 7 == 0 )
			    cout << k << "  ";
		
    cout << endl;
	
	return 0;
}
