// if

#include<iostream>

using namespace std; 

int main()
{
    int  x, sign_x;

    cout << "Please input x: ";
    cin >> x; 
    cout << "Your input: x=" << x << endl;
    
    if ( x > 0 ) 
        sign_x = 1;
    else if (x < 0)
        sign_x = -1;
    else
        sign_x = 0;
        
    cout << "sign(x)=" << sign_x << endl;
 
    return 0; 
}
