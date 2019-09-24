// Ëæ»úÊı 
#include <iostream> 
#include <cstdlib>

using namespace std; 

int main() 
{ 
    int seed, x;
    int a, b;
    
    a = 10; b = 20;
    
    seed=121;    
	srand(seed); 
	x = rand()%(b+1-a) + a;
    cout << "x=" << x << endl; 

    return 0; 
} 
