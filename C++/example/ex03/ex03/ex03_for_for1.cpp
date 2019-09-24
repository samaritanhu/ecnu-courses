/*
  打印图案

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
	int i, j;
	
	// 先输出前4行图案
    for(i=1; i<=4; i++) 	
    { 
        for(j=1; j<=8-2*i; j++) // 输出空格 
            cout<<' ';
            
        for(j=1; j<=2*i-1; j++)  // 输出星号 
            cout<<'*';
            
        cout<<endl;  // 换行 
    }
    
    // 输出后3行图案
    for(i=1; i<=3; i++)	
    { 
        for(j=1; j<=7-2*i; j++)  // 输出星号
            cout<<'*';	 
            
        cout<<endl; // 换行 
    }
	
	return 0;
}
