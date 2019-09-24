// 给定两个一维数组 a 和 b，
// 其中 a 中的数据是无序的，而 b 中的数据按升序排列。
// 统计 a 的所有元素中，大于 b 的第 k 个元素且
// 小于第 k+1 个元素的数据个数
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int m = 10, n = 5;
	int a[m] = {98,12,34,71,43,54,28,33,65,56};
    int b[n] = {10,30,50,80,100};
    int c[n-1] = {0};
    int i, k;

    for(i=0; i<m; i++)
        for(k=0; k<n-1; k++)
            if (a[i]>b[k] && a[i]<b[k+1])
            { c[k] = c[k] + 1; break; }

    cout << "c = ";
    for(k=0; k<n-1; k++)
        cout << c[k] << " " ;
    cout << endl;

	return 0;
}
