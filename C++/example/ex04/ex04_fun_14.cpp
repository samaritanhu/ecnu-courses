// ÒıÓÃ 
#include <iostream>

using namespace std;
 
void swap_old(int a, int b)
{
    int t = a;
    a = b; b = t; 
}

void swap_new(int &a, int &b)
{
    int t = a;
    a = b; b = t; 
}

int main()
{
	int x=5, y=8;
	
	cout << "Before swap: x=" << x << ", y=" << y << "\n\n";
	
	swap_old(x, y);
	cout << "After swap_old: x=" << x << ", y=" << y << "\n\n";
	
	swap_new(x, y);
	cout << "After swap_new: x=" << x << ", y=" << y << "\n\n";
	
	return 0;
}
