// 冒泡排序 
#include <iostream>
#include <iomanip>

using namespace std;

// 优化后的冒泡排序
void sort_bubble(int * px, int n)
{ 
    int k, flag, key; 
    
    for(k=n-1; k>0; k--)
    {
		flag = 0;
		for (int i=0; i<k; i++)
			if (px[i] > px[i+1])
			{
				flag = 1;
				key = px[i]; 
				px[i] = px[i+1]; 
				px[i+1] = key; 
			}
		if(flag==0) break; // 如果没有出现交换，则排序结束
	}
} 

// 冒泡排序的进一步优化
void sort_bubble2(int * px, int n)  
{  
    int k, key, idx; 
    
    idx = n-1;  // 记录最后一次交换发生的位置 
    while (idx > 0)  
    {  
        k = idx;  
        idx = 0;  
        for (int i=0; i < k; i++)  
            if (px[i] > px[i+1])  
            {  
				idx = i;
                key = px[i]; 
				px[i] = px[i+1]; 
				px[i+1] = key; 
            }  
    }  
}  

int main()
{
    const int n=10;
    int x[n]={16,9,8,1,14,20,15,1,17,20}; // 测试数据 
    
	cout << "排序前: "; // 输出原始数据  
	for(int i=0; i<n; i++) cout << setw(4) << x[i];

	sort_bubble(x, n);
	
	cout << "\n排序后: ";
	for(int i=0; i<n; i++) cout << setw(4) << x[i];
	
	return 0;
}

