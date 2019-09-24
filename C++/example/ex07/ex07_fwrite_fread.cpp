// fwrite
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>

using namespace std; 

int main()
{
    int A[3][3]={{11,12,13},{21,22,23},{31,32,33}};
    
    FILE * pf;
    
    // cout<<sizeof(int) << ", " << sizeof(A)<<endl;
    
    // fwrite
    pf = fopen("data1.dat","wb");
    fwrite(A,sizeof(int),9, pf);
    // fwrite(A,sizeof(A),1, pf);
    fclose(pf);

    // fread
    pf = fopen("data1.dat","rb");
    int B[3][3];
    fread(B,sizeof(int),9, pf);
    fclose(pf);
    
    cout << "A=\n";
    for (int i=0; i<3; i++)
    {  
        for (int j=0; j<3; j++)
            cout << setw(4) << A[i][j];  
        cout << "\n";
    }

    cout << "B=\n";
    for (int i=0; i<3; i++)
    {  
        for (int j=0; j<3; j++)
            cout << setw(4) << B[i][j];  
        cout << "\n";
    }
    
            
    cout << endl;   
	
    return 0; 
}
