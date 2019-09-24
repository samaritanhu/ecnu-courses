// ex_sizeof.cpp -- example for sizeof
#include <iostream>

using namespace std;

int main()
{
    cout << "sizeof(short): " << sizeof(short) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(long): " << sizeof(long) << endl;
    cout << "sizeof(long long): " << sizeof(long long) << endl;
    cout << endl;
    
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(long double): " << sizeof(long double) << endl;
    cout << endl;
    
	cout << "sizeof(bool): " << sizeof(bool) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    
    return 0; 
}
