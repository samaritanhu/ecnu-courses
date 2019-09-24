// 动态存储 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N=5;    
    
    int* pa = new int[N](); 
    int* pb = new int[N]{1,2,3,4,5}; // C++11新标准 
    
    for(int i=0; i<N; i++)
        cout << *(pa+i) << " ";
        
    cout << endl << endl;  
 
    for(int i=0; i<N; i++)
        cout << *(pb+i) << " ";
    
    cout << endl;  
	
	return 0;
}


