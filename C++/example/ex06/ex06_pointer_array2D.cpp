// 二维数组与指针 
#include <iostream>
#include <iomanip>


using namespace std;

const int n = 5;
 
int main()
{
    int A[n][n];
    int i, j;
    
    for(i=0; i<n; i++)
    	for(j=0; j<n; j++)
    		A[i][j] = i+j;
    
    cout << "使用普通数组方法：\n";
    for(i=0; i<n; i++)
    {
    	for(j=0; j<n; j++)
    		cout << setw(3) << A[i][j];
    	cout << endl;
	}
	
    cout << "使用普通指针：\n" ; 
    int *pa = &A[0][0];	 
    for(i=0; i<n; i++)
    {
    	for(j=0; j<n; j++)
    		cout << setw(3) << *(pa+n*i+j);
    	cout << endl;
	}

    cout << endl;

	return 0;
}
