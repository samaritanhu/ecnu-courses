// 矩阵乘积 
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

const int N=5;

void matrix_prod(double X[N][N], double Y[N][N], double Z[N][N]); 

int main()
{
	double X[N][N], Y[N][N];
	double Z[N][N] = {0};   
	int i,j;
	
	srand(time(0));
	for (i=0; i<N; i++)	
    for (j=0; j<N; j++)
    {
		X[i][j] = rand() % 10; // 生成随机矩阵，供测试用  
        Y[i][j] = rand() % 10; // 生成随机矩阵，供测试用  
	}         

    matrix_prod(X, Y, Z);
    
	// 在屏幕上输出，检验结果  
	// 先输出 X 与 Y	 
	cout << "X and Y: \n";
	for (i=0; i<N; i++)	
    { 
		for (j=0; j<N; j++)
	    	cout << X[i][j] << " ";
		cout << "    ";
		for (j=0; j<N; j++)
	    	cout << Y[i][j] << " ";
	    cout << endl;
	}        
	cout << endl;
	
	// 输出 Z 
	cout << "Z= \n";
	for (i=0; i<N; i++)	
    { 
		for (j=0; j<N; j++)
	    	cout << setw(4) << Z[i][j] << " ";
	    cout << endl;
	}    

	return 0;
}

// 计算矩阵乘积  
void matrix_prod(double X[N][N], double Y[N][N], double Z[N][N])
{
	int i,j,k;
	
	for (i=0; i<N; i++)
	for (j=0; j<N; j++)
	for (k=0; k<N; k++)
	    Z[i][j] = Z[i][j] + X[i][k]*Y[k][j]; 

} 

