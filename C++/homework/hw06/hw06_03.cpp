// 输出最小的前 100 个素数
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int N = 100;

bool isprime(int n);

int main()
{
	int k=0; // 记录素数个数
	int p[N], n;

    for (n=2; k<N; n++)
		if (isprime(n))
	  	{  p[k] = n; k++; }

	// 输出素数
	cout << "第一种方式：数组名+下标\n";
	for (k=0; k<N; k++)  // 第一种方式：数组名+下标
	{
	    cout << setw(4) << p[k];
	    if ((k+1)%10==0) cout << endl;
	}
    cout << endl;

    cout << "第二种方式：数组名+指针运算\n";
	for (k=0; k<N; k++)   // 第二种方式：数组名+指针运算
	{
		cout << setw(4) << *(p+k);
	    if ((k+1)%10==0) cout << endl;
	}
	cout << endl;

    cout << "第三种方式：指针+指针运算\n";
    int * pp;
	for (k=0, pp=p; pp<p+N; pp++)  // 第三种方式：指针+指针运算
	{
		cout << setw(4) << *pp;
		k = k + 1;
	    if (k%10==0) cout << endl;
	}
	cout << endl;

	return 0;
}

bool isprime(int n)
{
    if (n<2) return false;

	for (int k=2; k<=sqrt(n); k++)
		if (n%k==0) return false;

	return true;
}
