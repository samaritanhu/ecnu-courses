// 默认形参 
#include <iostream>

using namespace std;
 
int add(int x=1, int y=2);

int main()
{   
    int add(int x=3, int y=4); 
    
    cout << "In main: add()=" << add() << endl; 
    
    void fun();
    fun();
    
	return 0;
}

void fun()
{
    cout << "In fun: add()=" << add() << endl; 
}

int  add(int x, int y)  // 这里不能再出现默认形参 
{   
    return x+y;   
}

	


 

