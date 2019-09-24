// 函数的调用 
#include <iostream>

using namespace std;
 
double my_power(double x, int k);
 
int main()
{
	double x;
 
    x = my_power(3,3) + my_power(4,4);
	 
	cout << "3^3 + 4^4 = " << x << endl;
	
	return 0;
}

double my_power(double x, int k)
{
    double y = 1.0;
    
    for (int i=1; i<=k; i++)
        y = y * x;
        
    return y;
}
 

