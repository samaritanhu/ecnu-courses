// 统计 0--9 数字出现的次数 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N=100;

int main()
{
	int n, k;    
	int counts[10]={0};
		
	srand(time(0));
	for (k=1; k<=N; k++)
	{
		n = rand() % 10; 
		switch (n)
		{
		case 0 : 
			counts[0] = counts[0] + 1; break; // 别漏了 break 
		case 1 : 
			counts[1] = counts[1] + 1; break;  
		case 2 : 
			counts[2] = counts[2] + 1; break;  
		case 3 : 
			counts[3] = counts[3] + 1; break;  
		case 4 : 
			counts[4] = counts[4] + 1; break;  
		case 5 : 
			counts[5] = counts[5] + 1; break;  
		case 6 : 
			counts[6] = counts[6] + 1; break;  
		case 7 : 
			counts[7] = counts[7] + 1; break;  
		case 8 : 
			counts[8] = counts[8] + 1; break;  
		case 9 : 
			counts[9] = counts[9] + 1; break;  
		}
    }
	
    for (k=0; k<10; k++)
	  cout << k << " 出现的次数：" << counts[k] << endl;
	  
    cout << endl;	 
	return 0;
}
