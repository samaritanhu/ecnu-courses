// 闰年
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, k=0;

    cout << "21世纪的闰年有:\n";
    for (i=2001;i<=2100;i++)
    	if ( (i%4==0) && (i%100!=0) || (i%400==0) )
        {
        	k = k + 1;
        	cout << setw(6) << i;
        	if (k%6==0) 
        	    cout << endl;
        }
        
    cout << endl;
	return 0;
}
