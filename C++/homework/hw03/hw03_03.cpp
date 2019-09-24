/*
要求从键盘输入一个大于 1 的整数（需要判断输入的合法性，即是否大于1），
然后求出不超过这个整数的最大素数。
要求使用 for 循环和 if 语句
*/

#include <iostream>

using namespace std;

int main()
{
	int n, k, i, flag=0;
	cout << "Please input an integer: ";
	cin >> n;
	
	if (n<=1)  //  判断输入的合法性
	{
		cout << "Input ERROR!" << endl;
	    return 1;
    }	
	
	for (k=n; k>1 && flag==0; k--)	
	    for (i=2,flag=1; i<k; i++)
		    if (k%i==0)
		    { flag=0;  break; }
		    
	cout << "不超过 " << n << " 的素数是:" << k+1 << endl;
	
	return 0;
}
