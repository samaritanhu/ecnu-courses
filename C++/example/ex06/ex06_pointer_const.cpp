// 指针与常量 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    const int a=3;
    // int * pa = &a;  // ERROR 
    const int * cpa = &a;
    
    
    cout << "a=" << *cpa << endl;
    // *cpa = 5; // ERROR
    
    int b = 5;
    cpa = &b;  // OK
   // *cpa = 9; // ERROR
   // b = 9; // OK
    cout << "b=" << *cpa << endl;    

	return 0;
}
