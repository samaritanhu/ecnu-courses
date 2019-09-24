// 函数的调用 
#include <iostream>

using namespace std;
 
int my_max(int x, int y)
{
    if (x>y) return x;
    else return y;
}
 
int main()
{
	int  m, n;
	 
    cout << "please input m and n: " ;
    cin >> m >> n;
	
	cout << "max(" << m <<"," << n <<")=" << my_max(m,n) << endl;
	
	return 0;
}


