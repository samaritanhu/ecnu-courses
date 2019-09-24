// สýื้ 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;    
    cout << "input n: "; cin >> n;
    
	int i, x[n];
	 
    for (i=0; i<n; i++)
        x[i] = 2*i;

    for (i=0; i<n; i++)
        cout << "x[" << i << "]=" << x[i] << endl;         
	
	return 0;
}
