// ²Ù×İ·û
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main()
{
    int A[3][3]={{11,12,13},{21,22,23},{31,32,33}};

     // ÉèÖÃÌî³ä·û 
	// cout.fill('*');
	cout << setfill('*');
    for (int i=0; i<3; i++)
    {  
        for (int j=0; j<3; j++)
            cout << setw(4) << A[i][j]; // ÉèÖÃÊä³ö¿í¶È
        cout << "\n";
    }

    
    cout << endl; 
	
    return 0; 
}
