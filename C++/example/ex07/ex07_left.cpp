// ²Ù×Ý·û
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main()
{
    int A[3][3]={{11,12,13},{21,22,23},{31,32,33}};

    cout << setfill('='); // ÉèÖÃÌî³ä·û 
    cout << "È±Ê¡ÎªÓÒ¶ÔÆë\n";
    for (int i=0; i<3; i++) 
    {  
        for (int j=0; j<3; j++)
            cout << setw(4) << A[i][j]; // È±Ê¡ÎªÓÒ¶ÔÆë 
        cout << "\n";
    }

    cout << endl << endl;
    cout << left; // ÉèÖÃ×ó¶ÔÆë  
    cout << "ÉèÖÃÎª×ó¶ÔÆë\n";
	for (int i=0; i<3; i++)
    {  
        for (int j=0; j<3; j++)
            cout << setw(4) << A[i][j];  
        cout << "\n";
    }
    
    cout << endl;    

    return 0; 
}
