// 指针与数组 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    int a[] = {0,2,4,6,8};
    int * pa = a;    
    
    cout << "a[0]=" << a[0] << ", a[1]=" << a[1] 
         << ", a[2]=" << a[2] << endl;
    
    *pa = 1; // OK, equivalent to a[0]=1
    *(pa+2) = 5; // OK, equivalent to a[2]=5
    // *(a+2) = 5; // OK
    cout << "a[0]=" << a[0] << ", a[1]=" << a[1] 
         << ", a[2]=" << a[2] << endl;

    *(pa++) = 3; // OK, equivalent to a[0]=3; pa = pa + 1;
    // *pa = 6;
    // *(a++) = 3; // ERROR
    // *(a+1) = 5; // OK
    cout << "a[0]=" << a[0] << ", a[1]=" << a[1] 
         << ", a[2]=" << a[2] << endl;
    
    cout << endl;    

	return 0;
}
