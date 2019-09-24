// if
#include<iostream>

using namespace std; 

int main()
{
    int  x, y, t;

    cout << "Please input x, y : ";
    cin >> x >> y; 
    cout << "input:\t x=" << x << "\t y=" << y <<endl;
    
    if (x>y) 
    {  t = x;
       x = y;
       y = t;
    }
    cout << "output:\t x=" << x << "\t y=" << y <<endl;
     
/*
    if (x>y) 
       t = x;
       x = y;
       y = t;    
    cout << "output:\t x=" << x << "\t y=" << y <<endl;   
*/
 
    return 0; 
}
