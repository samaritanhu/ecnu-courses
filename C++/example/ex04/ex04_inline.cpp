// 内联函数 
#include <iostream>
#include<ctime>

using namespace std;
 
inline double f(double x)  // 内联函数 
{
    return 2*x*x - 1; // f(x) = 2x^2 -1
}

int main()
{
	 
	cout << "f(3)=" << f(3.0) << endl;
	
	return 0;
}


 

