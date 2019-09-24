// i++ 与 ++i 的区别 
#include<iostream>

using namespace std; 

int main()
{
    int  i=10, j, k;
    
    j = i++;
    cout << "j=" << j << endl;

    k = ++i;    
    cout << "k=" << k << endl;
    
    cout << "i=" << i << ", ";
	cout << "i++=" << i++ << endl;
    cout << "i=" << i << ", ";
	cout << "++i=" << ++i << endl;
    
    return 0; 
}
