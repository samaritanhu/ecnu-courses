// �ֲ�������ȫ�ֱ��� 
#include <iostream>

using namespace std;

int i=2;   // ȫ�ֱ���

int main()
{  
	int i=5; // �ֲ�����
    {  
		int i=7;  // �ֲ�����
        cout << "i=" << i << endl;  // i=7
    }
    cout << "i=" << i;   // i=5
    
	cout << "ȫ�ֱ��� i=" << ::i;   // i=2
   
   return 0;
}

