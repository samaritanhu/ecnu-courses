// ����
// �ܱ�4���������ܱ�100�����������ܱ�400����

#include <iostream>

using namespace std;

int main()
{
	int year;
	cout << "Input year: ";
	cin >> year;
	
	// ��� 
	bool isleapyear=false;
	
	if (year % 4 == 0 && year % 100 != 0)
		isleapyear = true;
	if (year % 400 == 0)
		isleapyear = true;
	
	// isleapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	
	// ������ 
	if (isleapyear)
		cout << year << " is a leap year\n";
	else
		cout << year << " is not a leap year\n";	

	return 0;
}
