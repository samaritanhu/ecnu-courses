// 字符串
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{ 
    int x;
    double y;
    
    x=atoi("66");  // x=66
    y=atof("14.5"); // y=14.5
    cout << "x=" << x << ", y=" << y << endl << endl; 
    
    x=atoi("abc");  // x=0
    cout << "x=" << x << endl << endl; 
    
    x=atoi("11c22");  // x=0
    cout << "x=" << x << endl << endl; 

    // 将整数转化为字符串 
    char str[5];
    itoa(66,str,10); 
    cout << "10进制：str=" << str << endl;
    itoa(66,str,8); 
    cout << "8 进制：str=" << str << endl;
    itoa(66,str,16); 
    cout << "16进制：str=" << str << endl;
 
    cout << endl;

	return 0;
}
