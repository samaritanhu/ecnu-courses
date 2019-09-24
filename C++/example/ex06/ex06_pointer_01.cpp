// 指针 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    int x;
    int * px = &x; 
    
    x = 5;
    cout << "使用变量名：x=" << x << endl;
    cout << "使用指针：x=" << *px << endl;
    
    cout << endl;

	return 0;
}
