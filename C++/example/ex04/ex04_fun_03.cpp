// 输入一个二进制数，输出相应的十进制数
#include <iostream>

using namespace std;
 
int my_power2(int k); // compute 2^k 
 
int main()
{
	long x, x0;
    int y=0, k=0, t;
	
	cout << "请输入一个二进制数: ";
	cin >> x;
	x0 = x;
	
	while (x != 0)
	{
        t = x % 10;
        if (t==1)  y = y + my_power2(k);
        x = x / 10;
        k = k + 1;        
    }
 
	cout << "二进制数 " << x0 
         << "对应的十进制数为 " << y << endl;
	
	return 0;
}


int my_power2(int k)  // compute 2^k 
{
    int y = 1;
    
    for (int i=1; i<=k; i++)
        y = y * 2;
        
    return y;
}
 

