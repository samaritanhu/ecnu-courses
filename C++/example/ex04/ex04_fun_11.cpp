// 形参与实参 
#include <iostream>

using namespace std;
 
double my_power(double x, int k);
 
int main()
{
	double x, y;
	int n;
	
	x = 3.0;
	n = 2;
	
	y = my_power(x,n);
	 
	cout << x << "^" << n << " = " << y << endl;
	
	return 0;
}

double my_power(double x, int k)
{
    double y = 1.0;
    
    for (int i=1; i<=k; i++)
        y = y * x;
        
    return y;
}
 

