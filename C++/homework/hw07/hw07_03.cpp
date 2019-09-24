// 编写两个函数，分别用循环和递归计算一个整数的所有数字之和。
// 并在主函数中分别调用这两个函数计算 2012112118 的所有数字之和
#include <iostream>
#include <cstdlib>

using namespace std;

int sum_loop(long x)
{
	int s = 0;
	while(x!=0)
	{
		s = s + x%10;
		x = x/10;
	}
	return s;
}

int sum_recursion(long x)
{
	if (x/10==0)
		return x;
	else 
		return sum_recursion(x/10) + x%10;
}

int main()
{
    int x=2012112118;
    
    cout << "使用循环: " << sum_loop(x) << endl;
    cout << "使用递归: " << sum_recursion(x) << endl;
    
	return 0;
}


