// สýื้ 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, x[5];
	 
    for (i=0; i<5; i++)
        x[i] = 2*i;

    for (i=0; i<5; i++)
        cout << "x[" << i << "]=" << x[i] << endl;         
	
	return 0;
}
