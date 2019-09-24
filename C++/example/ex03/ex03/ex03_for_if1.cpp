/*
  输出 100 到 200 之间所有不能被 3 整除，但能被 7 整除的数 
*/ 
#include <iostream>

using namespace std;

int main()
{
	int k;
	
	cout << "100到200之间所有不能被3整除，但能被7整除的数有：" << endl;
	for (k = 100; k <= 200; k++)
		if ( k % 3 != 0 )
		    if ( k % 7 == 0 )
			    cout << k << "  ";
		
    cout << endl;
	
	return 0;
}
