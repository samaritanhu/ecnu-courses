// ���ݷ�
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main()
{
    int A[3][3]={{11,12,13},{21,22,23},{31,32,33}};

    cout << "ʹ�� setw \n";    
    for (int i=0; i<3; i++)
    {  
        for (int j=0; j<3; j++)
            cout << setw(4) << A[i][j]; // ����������
        cout << "\n";
    }

    cout << "\n";
    cout << "ʹ�� cout.width \n";    
    for (int i=0; i<3; i++)
    {    
        for (int j=0; j<3; j++) 
        {
            cout.width(4);
            cout << A[i][j]; // ����������
        }    
        cout << "\n";
    }
    
    cout << endl;    

    return 0; 
}
