// �ֱ��� ��������ָ�� ��������Ԫ�� 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int n = 5; 
    int a[n] = {0,2,4,6,8};
    
    // ��һ�ַ�ʽ�����������±� 
    cout << "��һ�ַ�ʽ�����������±꣺\n" ;
    for (int i=0; i<n; i++)
        cout << a[i] << ",";
    cout << "\n\n" ;
    
    // �ڶ��ַ�ʽ����������ָ������ 
    cout << "�ڶ��ַ�ʽ����������ָ�����㣺\n" ;
    for (int i=0; i<n; i++)
        cout << *(a+i) << ",";
    cout << "\n\n" ;
    
    // �����ַ�ʽ��ָ����ָ������ 
    cout << "�����ַ�ʽ��ָ�룺\n" ;
    for (int *pa=a; pa<a+n; pa++)
        cout << *pa << ",";
    cout << "\n\n" ; 

    // �����ַ�ʽ��ָ������������ 
    cout << "�����ַ�ʽ��ָ��(��)��\n" ;
    for (int *pa=a, i=0; i<n; i++)
        cout << pa[i] << "," ; 
     cout << "\n\n" ;    

	return 0;
}
