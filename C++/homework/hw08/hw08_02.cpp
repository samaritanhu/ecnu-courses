// Shell 排序 
#include <iostream>
#include <iomanip>

using namespace std;
 
void sort_shell(int * px, int n)
{ 
	int key, i, j, gap;
    for(gap=n/2; gap>0; gap=gap/2)
    	for(i=gap; i<n; i++)
        { 
        	key = px[i]; // 对一组增量为 gap 的序列进行插入排序
            for(j=i-gap; j>=0 && px[j]>key; j=j-gap)
				px[j+gap] = px[j];
				
            px[j+gap] = key;
        }
}


int main()
{
    const int n=10;
    int x[n]={16,9,8,1,14,20,15,1,17,20}; // 测试数据 
    
	cout << "排序前: "; // 输出原始数据  
	for(int i=0; i<n; i++) cout << setw(4) << x[i];

	sort_shell(x, n);
	
	cout << "\n排序后: ";
	for(int i=0; i<n; i++) cout << setw(4) << x[i];
	
	return 0;
}

