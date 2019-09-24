// 字符串
#include <iostream>

using namespace std;

int main()
{ 
    char str[20]="C++ and Matlab";    
     
    cout << "法一：单个单个输出\n"; 
    for(int i=0;i<20;i++)
    	if (str[i]!='\0')
			cout << str[i];   
		else
			break;
			
    cout << endl << endl;
    
    cout << "法二：整体输出\n";
    cout << str << endl;

	return 0;
}
