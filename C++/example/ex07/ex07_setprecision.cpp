// ���ݷ�
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main()
{
    double a[3]={2.7182818, 31.416, 987000};

    cout << "������Ч���ָ�����\n";
    cout << setprecision(3);  
	for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 
        
	cout << endl << endl;        
    cout << "����С�����λ����\n";
	cout << "(�� fixed �� scientific ��) \n";
    cout << fixed; 
    for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 
            
    cout << endl << endl; 
	
    return 0; 
}
