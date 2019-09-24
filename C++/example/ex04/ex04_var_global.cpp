// 局部变量与全局变量 
#include <iostream>

using namespace std;

int i=2;   // 全局变量

int main()
{  
	int i=5; // 局部变量
    {  
		int i=7;  // 局部变量
        cout << "i=" << i << endl;  // i=7
    }
    cout << "i=" << i;   // i=5
    
	cout << "全局变量 i=" << ::i;   // i=2
   
   return 0;
}

