// if

#include<iostream>

using namespace std; 

int main()
{
    int  x, y;

    cout << "Please input x, y : ";
    cin >> x >> y; 
    cout << "Your input is: x=" << x << ", y=" << y <<endl;
    
    if ( x > y ) 
       cout << "The larger is: x=" << x << endl;
    else
       cout << "The larger is: y=" << y << endl;
 
    return 0; 
}
