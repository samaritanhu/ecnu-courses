// sizeof
#include<iostream>

using namespace std; 

int main()
{
	short a=5, b=14;
	short c1, c2, c3, c4, c5, c6;

	c1 = a & b;
	c2 = a | b;
	c3 = ~a;
	c4 = a ^ b;
	c5 = a << 3;
	c6 = a >> 2;
    
    cout << "a=" << a << endl; 
    cout << "b=" << b << endl; 
    cout << "c1=" << c1 << endl; 
    cout << "c2=" << c2 << endl; 
    cout << "c3=" << c3 << endl; // ×¢ÒâÊÇ²¹Âë 
    cout << "c4=" << c4 << endl; 
    cout << "c5=" << c5 << endl; 
    cout << "c6=" << c6 << endl; 
     
    return 0; 
}
