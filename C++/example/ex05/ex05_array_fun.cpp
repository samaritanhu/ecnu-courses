// 计算矩阵各列的和 
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

const int m = 3, n = 4; // 矩阵维数
 
int main()
{
    int i, j;
	double H[m][n], s[n]; 
	
    for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			H[i][j] = 1.0 / (i+j+1); // Hilbert 矩阵    
	
	void sum_col(double A[][n], double s[]);
	sum_col(H, s);
	
	cout << "s[0]=" << s[0] << ", s[n-1]=" << s[n-1] << endl;
	cout << "H[0][0]=" << H[0][0] << ", H[0][n-1]=" << H[0][n-1] << endl;
	
	cout << endl;

	return 0;
}

void sum_col(double A[][n], double s[])
{
    int i, j;
    for(j=0; j<n; j++)  
		s[j]=0.0;
    
    for(j=0; j<n; j++)
		for(i=0; i<m; i++)
			s[j] = s[j] + A[i][j];
    
}
