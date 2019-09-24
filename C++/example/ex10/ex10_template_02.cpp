// Template
#include <iostream> 

using namespace std;

template <typename T1, typename T2, typename T3>
T3 Max(T1& x, T2& y)
{
	if (x>=y) 
		return x;
	else
		return y;
}


int main()
{
	int a=2, b=3;
	double e=2.2, f=2.3;
	
	
	cout << "max(a,e)=" << Max<int,double,double>(a,e) << endl; 

	return 0;
}
