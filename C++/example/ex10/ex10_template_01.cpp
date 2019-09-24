// Template
#include <iostream> 

using namespace std;

//int Max(int x, int y)
//{
//	if (x>=y) 
//		return x;
//	else
//		return y;
//}

//double Max(double x, double y)
//{
//	if (x>=y) 
//		return x;
//	else
//		return y;
//}

template <typename T>
T Max(T x, T y)
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
	
	
	cout << "max(a,b)=" << Max<int>(a,b) << endl;
	cout << "max(e,f)=" << Max<double>(e,f) << endl;

	return 0;
}
