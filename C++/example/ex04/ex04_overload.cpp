// КЏЪ§жиди 
#include <iostream>

using namespace std;
 
int add(int x, int y)
{  return x + y;  } 

double add(double x, double y)
{  return x + y;  } 

int main()
{   
    int a=1, b=2;
    double x=1.1, y=2.2; 
    
    cout << "a+b=" << add(a,b) << "\n" << endl; 
    
    cout << "x+y=" << add(x,y) << "\n" << endl; 
    
	return 0;
}
