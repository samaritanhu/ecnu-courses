// 名称空间  
#include <iostream>

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
	using namespace mynames; // 导入 mynames 中的所有名称  
 
    double x = 3, y;
    
	cout << "pi=" << pi << "\n" << endl;
	
    y = my_power(x,k); 
	cout << "y=" << y << "\n" << endl;
	
	
	return 0;
}

int mynames::my_max(int x, int y)   // 定义 mynames 中的函数 
{
    if ( x > y ) return x;
    else return y;
}

double mynames::my_power(double x, int k)   // 定义 mynames 中的函数 
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
 

