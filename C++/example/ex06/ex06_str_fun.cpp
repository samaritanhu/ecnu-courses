// �ַ�����غ���
#include <iostream>
#include <cstring>

using namespace std;

int main()
{ 
    int N = 20;
    char str1[N];
    char str2[]="Hello world!";

    strncpy(str1,str2,N-1); // ʵ�ʸ����ַ����������� str2 ����
    
    cout << "str1::" << str1 << "::EOF:" << endl;
    cout << "sizeof(str1)=" << sizeof(str1) << endl;
    cout << "strlen(str1)=" << strlen(str1) << endl;    
 
    cout << endl;

	return 0;
}
