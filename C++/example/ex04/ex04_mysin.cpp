// ���� Taylor չ������ sin ������ֵ  
#include <iostream>
#include <cmath>

using namespace std;
 
double mysin(double x);  
 
int main()
{

	double x, y;

	cout << "������ x: ";
	cin >> x;
	
	y = mysin(x); 
	
 
	cout << "mysin(" << x << ")=" << y << endl;
	cout << "�Դ�������" << sin(x) << endl;
	
	return 0;
}

// compute sin
double mysin(double x)  
{
    double y, ak;
    int k;
    
	y = 0.0;
	k = 1;
	ak = x;
	while ( fabs(ak) >= 1e-15)  // fabs --> absolute value 
	{
        y = y + ak;
		ak = -ak*x*x/(2*k*(2*k+1));
        k = k + 1;    
    }
    
    return y;
}
 

