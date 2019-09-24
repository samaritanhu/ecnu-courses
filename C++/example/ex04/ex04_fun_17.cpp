// 默认形参 
#include <iostream>

using namespace std;
 
int add(int x=5, int y=6);

int main()
{   
    cout << "add(10,20)=" << add(10,20) << endl; 
    
    cout << "add()=" << add() << endl; 
    
    cout << "add(10)=" << add(10) << endl; 
    
	return 0;
}

int  add(int x /* x=5 */, int y /* y=6 */)  // 这里不能再出现默认形参 
{   
    return x+y;   
}

	


 

