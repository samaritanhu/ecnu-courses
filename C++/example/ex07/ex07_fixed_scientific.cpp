// ���ݷ�
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main()
{
    double a[3]={2.7182818, 31.416, 987000};

    cout << "�Զ����ʽ��� \n";
    cout << fixed;  // �Զ����ʽ���
    for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 

	cout << endl << endl;
    cout << "��ָ����ʽ��� \n";
    cout << scientific;  // ��ָ����ʽ���
    for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 

    cout << "\n" << endl;   
	
    return 0; 
}
