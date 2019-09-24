// sizeof
#include<iostream>

using namespace std; 

int main()
{
    int  a, b, c;
    
    a = sizeof(int);
    b = sizeof(3 + 5);
    c = sizeof(3.0L + 5);
    
    cout << "a=" << a << endl; 
    cout << "b=" << b << endl; 
    cout << "c=" << c << endl; 
    
    return 0; 
}
