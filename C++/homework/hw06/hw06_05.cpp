// �����ֲ�ͬ��ʽ��� 6 �׾��� T
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

//    cout << "\n������+ָ������: \nT = \n";
//    for(i=0; i<n; i++)
//    {  
//      for(j=0; j<n; j++)
//        cout << setw(3) << *(*(T+i)+j);
//      cout << "\n";
//    }  
//
//    cout << "\n��ָ��+ָ������:\nT = \n";
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


