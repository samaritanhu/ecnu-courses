// if

#include<iostream>

using namespace std; 

int main()
{
    int  x, y;

    cout << "Please input x, y: ";
    cin >> x >> y; 
    cout << "Your input: x=" << x << ", y=" << y << endl;
    
    if ( x != y ) 
       if ( x > y )
          cout << "x>y" << endl;
       else
          cout << "x<y" << endl;
    else
        cout << "x=y" << endl;
 
    return 0; 
}
