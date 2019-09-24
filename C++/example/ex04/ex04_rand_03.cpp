// Ëæ»úÊý 
#include <iostream> 
#include <cstdlib>

using namespace std; 

int main() 
{ 
	double x;
    
	srand(9000); 
	x = double(rand())/RAND_MAX;
    cout << "x=" << x << endl; 

    return 0; 
} 
