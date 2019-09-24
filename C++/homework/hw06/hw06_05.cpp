// 用三种不同方式输出 6 阶矩阵 T
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int n=6, i, j;
    int T[n][n];
    
    for(i=0; i<n; i++)
      for(j=0; j<n; j++)
        T[i][j] = abs(i-j)+1;
          
     
    cout << "T = \n";
    for(i=0; i<n; i++)
    {  
      for(j=0; j<n; j++)
        cout << setw(3) << T[i][j];
      cout << "\n";
    }  

//    cout << "\n数组名+指针运算: \nT = \n";
//    for(i=0; i<n; i++)
//    {  
//      for(j=0; j<n; j++)
//        cout << setw(3) << *(*(T+i)+j);
//      cout << "\n";
//    }  
//
//    cout << "\n行指针+指针运算:\nT = \n";
//    int (*pT)[n]=T;
//    for(i=0; i<n; i++)
//    {  
//      for(j=0; j<n; j++)
//        cout << setw(3) << *(*(pT+i)+j);
//      cout << "\n";
//    }  

	cout << endl;
	return 0;
}


