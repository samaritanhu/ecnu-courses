// 标准 C++ String 类 
#include <iostream>
#include <string>  // 注意不是 cstring 

using namespace std;

int main()
{
	string str1="Hello";
	string str2(3,'A');
	string str3=str1 + " Math";
	
	cout << "str1=" << str1 << endl;
	cout << "str2=" << str2 << endl;
	cout << "str3=" << str3 << endl;
	

//	string str4="Hello" + " Math";  // ERROR	
	string str4="Hello " + str2 + " Math";  // OK
//	string str4=str2 + "Hello " + " Math";  // OK
    str4="Hello";
	cout << "str4=" << str4 << endl;

	return 0;
}
