// 生成随机数 
#include <iostream> 
#include <cstdlib>

using namespace std; 

int main() 
{ 
    int seed, x;
    
    cout << "Enter seed: ";
    cin >> seed;
    
	srand(seed); 
	x = rand();
    cout << "x=" << x << endl; 

    cout << "seed=" << seed << ", RAND_MAX=" << RAND_MAX << endl;

	// 每次执行 rand 函数后，种子会自动改变, 但变化规律是固定的 
	for(int i=0;i<10;i++)
	{
		x = rand();
		cout << "i=" << i << ", x=" << x << endl;
    }  
    
    return 0; 
} 
