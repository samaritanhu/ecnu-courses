// ÀàĞÍ×ª»» 
#include<iostream>

using namespace std; 

int main()
{
    int a=1, b=2;
    int c;
    double y;
    
    c = a/b;
    cout << "c=a/b=" << c << endl;

    y = a/b;    
    cout << "y=a/b=" << y << endl;
    
    y = double(a)/b;
    cout << "y=double(a)/b=" << y << endl;
    
    y = double(a/b);
	cout << "y=double(a/b)=" << y << endl;
    
    return 0; 
}
