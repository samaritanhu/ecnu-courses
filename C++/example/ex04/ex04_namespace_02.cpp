// Ãû³Æ¿Õ¼ä  
#include <iostream>
#include <cstdlib>

using namespace std;
 
namespace mynames
{
   int my_max(int x, int y);
   double my_power(double x, int k);
   int k = 3;
   double pi = 3.14;
}
           
int main()
{
	using mynames::my_power; 
	using mynames::k;
 
    double x = 3, y;
    
//	cout << "pi=" << pi << "\n" << endl;  // error
	
    y = my_power(x, k);   // 
	cout << "y=" << y << "\n" << endl;
	
	
	return 0;
}

int mynames::my_max(int x, int y)
{
    if ( x > y ) return x;
    else return y;
}

double mynames::my_power(double x, int k)
{
    if (k==1) return x;
    else
    { 
        double y = 1.0;
    
        for (int i=1; i<=k; i++)
            y = y * x;
        
        return y;
    }
}
 

