// 猜生日 

#include <iostream>

using namespace std;

int main()
{
	int birthday=0;
	char answer;
	
	cout << "你的生日在下面的数组中吗? " << endl;
	cout <<  "16 17 18 19 20 21 22 23 \n24 25 26 27 28 29 30 31" << endl;
	cout << "请输入 Y 或 N: " ;
	cin >> answer;
	if (answer=='Y'||answer=='y')
	    birthday = birthday + 16;
	
	cout << "\n你的生日在下面的数组中吗? " << endl;
	cout <<  "8  9  10 11 12 13 14 15 \n24 25 26 27 28 29 30 31" << endl;
	cout << "请输入 Y 或 N: " ;
	cin >> answer;
	if (answer=='Y'||answer=='y')
	    birthday = birthday + 8;

	cout << "\n你的生日在下面的数组中吗? " << endl;
	cout <<  "4  5  6  7  12 13 14 15 \n20 21 22 23 28 29 30 31" << endl;
	cout << "请输入 Y 或 N: " ;
	cin >> answer;
	if (answer=='Y'||answer=='y')
	    birthday = birthday + 4;
	    
	cout << "\n你的生日在下面的数组中吗? " << endl;
	cout <<  "2  3  6  7  10 11 14 15 \n18 19 22 23 26 27 30 31" << endl;
	cout << "请输入 Y 或 N: " ;
	cin >> answer;
	if (answer=='Y'||answer=='y')
	    birthday = birthday + 2;
		
	cout << "\n你的生日在下面的数组中吗? " << endl;
	cout <<  "1  3  5  7  9  11 13 15 \n17 19 21 23 25 27 29 31" << endl;
	cout << "请输入 Y 或 N: " ;
	cin >> answer;
	if (answer=='Y'||answer=='y')
	    birthday = birthday + 1;
					
	cout << "\n你的生日是: " << birthday << endl;       
	
	return 0;
}
