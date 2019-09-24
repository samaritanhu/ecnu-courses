// 计算两个多项式 a(x) 和 b(x) 的乘积
// 这里：a=[a_0,a_1,...,a_m] 表示 a_0 + a_1 x + ... + a_m x^m
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void ploy_prod(double * pa, double * pb, double * pc, int m, int n)
{
	int k, i;
	for(k=0; k<m+n-1; k++)
	{
		*(pc+k)=0;
		for(i=0; i<=k; i++)
		{
			if(k-i<n && i<m) // 确保 pa[i] 和 pb[k-i] 都不越界 
			    *(pc+k) = *(pc+k) + *(pa+i)* *(pb+k-i);
		}
	} 
}

int main()
{
    double a[]={1,-6,0,2}, b[]={-2,1,3};
    int i, m, n;
    
    m = sizeof(a)/sizeof(a[0]);
	n = sizeof(b)/sizeof(b[0]);
	
	double c[m+n-1];
	
    cout << "a=[ ";
	for(i=0; i<m-1; i++) cout << a[i] << ", ";
	cout << a[m-1] << " ]\n";
    cout << "b=[ ";
	for(i=0; i<n-1; i++) cout << b[i] << ", ";
	cout << b[n-1] << " ]\n";
	
	ploy_prod(a, b, c, m, n);
	
    cout << "c=[ ";
	for(i=0; i<m+n-2; i++) cout << c[i] << ", ";
	cout << c[m+n-2] << " ]\n";	
		    
	return 0;
}


