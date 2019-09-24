// 引用 
#include <iostream>

using namespace std;
 
int main()
{
	int a;
	int &ra = a; // 声明一个指向 a 的引用 
	
	a = 3;
	cout << "a=" << a << endl;
	
	ra = 5;  // ra 和 a 共享同一个存储空间 
	cout << "a=" << a << endl;
	
	return 0;
}
