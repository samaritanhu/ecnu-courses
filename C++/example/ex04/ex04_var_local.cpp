// 作用域
#include <iostream>

using namespace std;
 
double my_power(double x, int k);
 
int main()
{
	double x;
	int k;
 
    x = 3; 
    k = 2;
	 
	cout << x <<"^" << k << "=" << my_power(x,k) << "\n" << endl;
	
	return 0;
}

double my_power(double x, int k)
{
    if (k==1) return x;
    else
    { 
        double y = 1.0;
    
        for (int i=1; i<=k; i++)
            y = y * x;
        
        return y;
    }
    // return y;   // 此处的 y 没有定义 
}
 

