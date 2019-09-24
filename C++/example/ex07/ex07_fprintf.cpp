// fprintf
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>

using namespace std; 

int main()
{
    FILE * pf;
    
    pf = fopen("out1.txt","wt");
    
    double pi=3.1415926;
    fprintf(pf,"pi=%-12.6f\n", pi);
    
    fclose(pf);

            
    cout << endl; 
	
    return 0; 
}
