// ָ����Ϊ�βΣ�ȡ����������С������ 
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void split(double x, int * n, double * f)
{
    *n = int(x);  // ȡ�������� 
    *f = x - *n;  // С������ 
}

int main()
{
    double x, x2;  // x2 ���С������ 
    int x1;  // x1 ����������� 

    cout << "Input a double number: ";
    cin >> x;
    
    split(x, &x1, &x2); 
    
    cout << "�������֣�" << x1 << endl;
    cout << "С�����֣�" << x2 << endl;

    cout << endl;     

	return 0;
}


