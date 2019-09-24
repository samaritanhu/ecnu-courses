// Hilber 矩阵与向量的乘积 
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

const int n = 500; // 矩阵维数
 
int main()
{
	clock_t t0, t1;
    int i, j;
	double H[n][n], x[n], y[n]; 
	
    t0 = clock();     
    for (i=0; i<n; i++)
    {
        x[i] = 1.0; // x 
        y[i] = 0.0; // 赋初值 
    }

	for (i=0; i<n; i++)
        for(j=0; j<n; j++)
            H[i][j] = 1.0 / (i+j+1);  // Hilbert 矩阵 

    for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			y[i] = y[i]+H[i][j]*x[j];
        
    t1 = clock();    
    
    cout << "y[0]=" << y[0] << ", y[n-1]=" << y[n-1] << endl;         
	cout << "Time: " << double(t1-t0)/CLOCKS_PER_SEC << endl;
	
	cout << "\nx[0]=" << x[0] << ", x[n-1]=" << x[n-1] << endl;
	cout << "H[0]=" << H[0][0] << ", H[n-1]=" << H[0][n-1] << endl;
	
	cout << endl;

	return 0;
}
