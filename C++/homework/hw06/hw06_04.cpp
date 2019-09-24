// ��д������������������˻� 
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void matrix_prod(double * px, double * py, double * pz,
                 int m, int p, int n);

int main()
{
	const int m=3, n=4, p=2; 
	double X[m][p], Y[p][n];
	double Z[m][n];   
	int i,j;
	
	srand(time(0));
	for (i=0; i<m; i++)	
    for (j=0; j<p; j++)
		X[i][j] = rand() % 10; // ������󣬹�����  
		
	for (i=0; i<p; i++)	
    for (j=0; j<n; j++)
		Y[i][j] = rand() % 10; // ������󣬹�����  
		
	for (i=0; i<m; i++)	
    for (j=0; j<n; j++)
		Z[i][j] = 0.0; // ������ Z ����ֵ 
      

    matrix_prod(&X[0][0], &Y[0][0], &Z[0][0], m, p, n);
    
	// ����Ļ�������������  
	// ��� X 
	cout << "X = \n";
	for (i=0; i<m; i++)	
    { 
		for (j=0; j<p; j++)
	    	cout << setw(4) << X[i][j] << " ";
	    cout << endl;
	}        
	cout << endl;
	
	// ��� Y 
	cout << "Y = \n";
	for (i=0; i<p; i++)	
    { 
		for (j=0; j<n; j++)
	    	cout << setw(4) << Y[i][j] << " ";
	    cout << endl;
	}        
	cout << endl;	
	
	// ��� Z 
	cout << "Z = \n";
	for (i=0; i<m; i++)	
    { 
		for (j=0; j<n; j++)
	    	cout << setw(4) << Z[i][j] << " ";
	    cout << endl;
	}    

    cout << endl;	
	return 0;
}

// �������˻�  
void matrix_prod(double * px, double * py, double * pz,
                 int m, int p, int n)
{
	int i,j,k;
	
	for (i=0; i<m; i++)
	for (j=0; j<n; j++)
	for (k=0; k<p; k++)
	    *(pz+n*i+j) = *(pz+n*i+j) + *(px+p*i+k)* *(py+n*k+j); 

} 

