/* 
修改程序 ex03_goto.cpp，避免使用 goto 语句
一个自然数，值等于其各个数位上的数的和的 4 倍。
求满足这个条件的最小的二位数。 
*/

#include <iostream>

using namespace std;

int main()
{
	int i, j, flag=0, k;
	
	for (i=1; i<=9 && flag==0; i++)	
	    for (j=1; j<=9 && flag==0; j++)
		    if (10*i+j == 4*(i+j))
		    { k=10*i+j; flag=1; }
		    
	cout << "满足要求的数是: " << k << endl;
	
	return 0;
}
