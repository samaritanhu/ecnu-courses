// �ֲ�������ȫ�ֱ��� 
#include <iostream>
#include <ctime>

using namespace std; 

int main()
{
    int i=5, x, y;  // �ֲ����� 
    
    extern int k;  // ���� 
    
    x = i + k;
    cout << "x=" << x << "\n" << endl;
    
    int my_power(int x);
    y = my_power(x);
    cout << "y=" << y << "\n" << endl;
    
    return 0; 
}

int k = 2;  // ȫ�ֱ��� 

int my_power(int x)
{
    int y = 1;
    
    for (int i=1; i<=k; i++)
        y = y * x;
        
    return  y;
}
