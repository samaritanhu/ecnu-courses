/*
  打印图案 (更通用的程序)

        *
      ***
    *****
  *******
  *****
  ***
  *
   
*/ 
#include <iostream>

using namespace std;

int main()
{
	int n=6, i, j;
	
	// 先输出前4行图案
    for(i=1; i<=n; i++) 	
    { 
        for(j=1; j<=2*(n-i); j++) // 输出空格 
            cout<<' ';
            
        for(j=1; j<=2*i-1; j++)  // 输出星号 
            cout<<'*';
            
        cout<<endl;  // 换行 
    }
    
    // 输出后3行图案
    for(i=1; i<=n-1; i++)	
    { 
        for(j=1; j<=2*(n-i)-1; j++)  // 输出星号
            cout<<'*';	 
            
        cout<<endl; // 换行 
    }
	
	return 0;
}
