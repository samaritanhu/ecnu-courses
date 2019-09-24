// 动态存储 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;    
    cout << "Input N: "; 
    cin >> N;
    
    int * pa = new int[N]; 
    
    int i, flag, k=0, n=2;
    while (k < N)
    {
      flag = 0;  

//      for(i=2; i<n; i++)
//          if (n % i == 0) {flag = 1; break;}
          
      for(i=0; i<k && pa[i]<=sqrt(n); i++)
          if (n % pa[i] == 0) {flag = 1; break;}

         
      if (flag==0) { pa[k] = n; k++; } 
      
      n++;   
    }
    
    cout << "最小的" << N << "个素数为: \n"; 
    for(int i=0; i<N; i++)
        cout << *(pa+i) << " ";
    
    cout << endl << endl;  
	
	return 0;
}


