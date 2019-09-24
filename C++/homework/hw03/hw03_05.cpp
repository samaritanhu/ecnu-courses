/*
计算常数 e, 显示小数点后 18 位
e ~ 2.7182818284590452353602875 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, k;
	const int N=20;
    long double e, item;
    
    cout << fixed;
    cout << setprecision(18);
    
    item = 1.0;  e = 1.0;
    for (k=1;k<=N;k++)
    {
    	item = item/k;
    	e = e + item;
    }
 	cout << "e=" << e << endl;
	
	return 0;
}
