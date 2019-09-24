// 交换两个整数的值 
#include <iostream>

using namespace std;
 
void swap(int a, int b)
{
    int t = a;
    a = b; b = t; 
}


int main()
{
	int x=5, y=8;
	
	cout << "Before swap: x=" << x << ", y=" << y << "\n\n";
	
	swap(x, y);
	cout << "After swap: x=" << x << ", y=" << y << "\n\n";
	
	return 0;
}
