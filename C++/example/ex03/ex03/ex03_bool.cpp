// bool
#include<iostream>
#include<cmath>

using namespace std; 

int main()
{
	bool x, y;
	
	// eg.1
    x = 1, y = -1.1;
    cout << "eg.1: x=" << x << ", y=" << y << endl;
    
    // eg.2
    x = 0; y = 1 - 1;
    cout << "eg.2: x=" << x << ", y=" << y << endl;

    // eg.3
    x = true; y = false;
    cout << "eg.3: x=" << x << ", y=" << y << endl;
    
    x = pow(sqrt(2.0),2)==2;
    cout << "pow(sqrt(2.0),2)==2 : " << x << endl; 

    return 0; 
}
