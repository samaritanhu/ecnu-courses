// 数组作为函数参数 
#include <iostream>
#include <cmath>

using namespace std;

void my_swap(int a[], int b[], int n) 
{ 
    int t, i;
    
    for (i=0; i<n; i++) 
    { 
        t = a[i];  a[i] = b[i];  b[i] = t; 
    }
}

int main()
{ 
    const int n=3;  // 注：dev 5.11 版本可以不用 const 

    int i;
    int x[n]={1,2,3}, y[n]={2,4,6};
    
    for(i=0; i<n; i++)
        cout << "x[" << i << "]=" << x[i] << "\t"
             << "y[" << i << "]=" << y[i] << "\n"; 
          
    my_swap(x,y,n); 
  
    for(i=0; i<n; i++)
        cout << "x[" << i << "]=" << x[i] << "\t"
             << "y[" << i << "]=" << y[i] << "\n";    
	
    cout << endl;
	
	return 0;
}
