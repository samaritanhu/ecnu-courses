// do while
// ����һ������������λ���ַ�ת�����
 
#include <iostream>

using namespace std;

int main()
{
	int n, right_digit;
	
	cout << "Please input a number: " ;
	cin >> n;
	
	cout << "The number in reverse order is ";
	do
	{
		right_digit = n % 10;
		cout << right_digit;
		n /= 10;
	} 
	while (n != 0);
	
	cout<<endl;		
	
	return 0;
}
