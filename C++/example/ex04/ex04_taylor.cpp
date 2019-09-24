// 利用 Taylor 展开计算 sin 函数的值  
// 递归方式
#include <iostream>
#include <cmath>

using namespace std;
 
const double tol = 1e-15;  // tolerance 

double my_power(double x, int k);  // compute (-1)^(k-1) * x^(2k-1) / (2k-1)!
 
int main()
{

	double x, y=0.0, t;
	int k = 1;

	cout << "请输入 x: ";
	cin >> x;
	
	t = x; 
	
	while ( abs(t) >= tol)  // abs --> absolute value 
	{
        y = y + t;
        k = k + 1;    
        t = my_power(x, k);
    }
 
	cout << "sin(" << x << ")=" << y << endl;
	cout << "自带函数：" << sin(x) << endl;
	
	return 0;
}

// compute (-1)^(k-1) * x^(2k-1) / (2k-1)!
double my_power(double x, int k)  
{
    double z;
    
    if (k==1) return x;
    else 
    {
       z = -(x/(2*k-1)) * (x/(2*k-2));
       return  z*my_power(x,k-1);
    }

}
 

