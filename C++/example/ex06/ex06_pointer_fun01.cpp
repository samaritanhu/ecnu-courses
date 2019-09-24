// 指针作为形参：取整数部分与小数部分 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void split(double x, int * n, double * f)
{
    *n = int(x);  // 取整数部分 
    *f = x - *n;  // 小数部分 
}

int main()
{
    double x, x2;  // x2 存放小数部分 
    int x1;  // x1 存放整数部分 

    cout << "Input a double number: ";
    cin >> x;
    
    split(x, &x1, &x2); 
    
    cout << "整数部分：" << x1 << endl;
    cout << "小数部分：" << x2 << endl;

    cout << endl;     

	return 0;
}


