// 储物柜问题 
#include <iostream>
#include <iomanip>

using namespace std;

const int N=100;

int main()
{
	int L[N] = {0}; // 标记储物柜状态，偶数关闭，奇数开启 
	int k, j;
	
	for (k=0; k<N; k++)	
    	for (j=k; j<N; j=j+k+1)
			L[j] = L[j]+1; // 记录状态变换  

    // 输出结果
	cout << "储物柜最终状态: \n";
	for (k = 0; k < N; k++)	
    	if (L[k]%2 == 1)
			cout << setw(3) << k+1 << ": 开启\n";
		 
	return 0;
}

