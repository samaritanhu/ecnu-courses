// 插入排序 
#include <iostream>
#include <iomanip>

using namespace std;
 
void sort_insert(int * px, int n)
{ 
    int k, i, key; 
    
    for(k=1; k<n; k++)
    {
		key = *(px+k);
		for(i=k-1; i>=0 && *(px+i)>key; i--)
		   *(px+i+1) = *(px+i); 

		*(px+i+1) = key;
	}
} 

int main()
{
    const int n=10;
    int x[n]={16,9,8,1,14,20,15,1,17,20}; // 测试数据 
    
	cout << "排序前: "; // 输出原始数据  
	for(int i=0; i<n; i++) cout << setw(4) << x[i];

	sort_insert(x, n);
	
	cout << "\n排序后: ";
	for(int i=0; i<n; i++) cout << setw(4) << x[i];
	
	return 0;
}

