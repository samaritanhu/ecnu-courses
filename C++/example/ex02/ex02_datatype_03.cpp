// ¸³ÖµÓï¾ä 
#include<iostream>

using namespace std; 

int main()
{
    int  a, b, c, d, e, f;
    
    a = 5;
    b = a+3;
    a = a + (c=6);    
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;

    d = e = f = a; 
    e *= d; 
    f /= c - 2;  
    cout << "d=" << d << endl;
    cout << "e=" << e << endl;
    cout << "f=" << f << endl;
    
    return 0; 
}
