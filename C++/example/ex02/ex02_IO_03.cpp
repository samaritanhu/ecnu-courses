// 简单的输入输出 
#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
	double x=3.14159,  y=12.3456789;
	
	cout << setprecision(5);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << endl;

	cout << fixed; 
	cout << setprecision(5);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << endl;

	cout << left;
	cout << "x=" << setw(20) << x << "MATH" <<endl;
	cout << setw(20) << "x=" << x << "MATH" <<endl;
	cout << endl;
    
	cout << right;
	cout << "x=" << setw(10) << x << "MATH" <<endl;
	cout << setfill('*');
	cout << "x=" << setw(10) << x << "MATH" <<endl;
    
    return 0; 
}
