// �ֲ�������ȫ�ֱ��� 
#include<iostream>
#include<ctime>

using namespace std; 

int k = 2;  // ȫ�ֱ��� 

int main()
{
    int i=5, x;  // �ֲ����� 
    
    x = i + k;
    cout << "x=" << x << "\n" << endl;
    
    {
        int k = 16;
        x = i + k;
        cout << "x=" << x << "\n" << endl;         
    }
    
    x = i + k;
    cout << "x=" << x << "\n" << endl;
    
    return 0; 
}

