// �ַ���
#include <iostream>

using namespace std;

int main()
{ 
    char str[20]="C++ and Matlab";    
     
    cout << "��һ�������������\n"; 
    for(int i=0;i<20;i++)
    	if (str[i]!='\0')
			cout << str[i];   
		else
			break;
			
    cout << endl << endl;
    
    cout << "�������������\n";
    cout << str << endl;

	return 0;
}
