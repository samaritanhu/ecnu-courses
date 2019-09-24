// 快速排序
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

using namespace std; 

// 快速排序
void sort_quick(int *px, int left, int right)  
{
	int pivot, i, j;
	  
    if (left < right)  
    {  
    	i = left; 
		j = right; 

        pivot = px[i]; // 采用子序列的第一个元素为基准数  
        
        while (i < j)  
        {   // 从右向左找第一个小于 pivot 的数  
            while (i < j && px[j] >= pivot) 
                j--;    
                
            // 将这个比 pivot 小的元素移到前半部分
            if (i < j)
            {	px[i] = px[j]; i = i + 1; }

            // 从左向右找第一个大于等于 pivot 的数  
            while (i < j && px[i] < pivot)   
                i++;    
            // 将这个大于等于 pivot 的元素移到后半部分
            if (i < j)
			{ 	px[j] = px[i]; j = j - 1; }
        }  
        
        px[i] = pivot;  

        sort_quick(px, left, i - 1);   // 递归调用   
        sort_quick(px, i + 1, right);  
    }  
}

int main()
{
    const int n=10;
    int x[n]={16,9,8,1,14,20,15,1,17,20}; // 测试数据 
    
    cout << "x=\n"; // 输出原始数据  
    for(int i=0;i<n;i++) cout << setw(3) << x[i]; 
    cout << endl << endl;
	  
    // 排序
    sort_quick(x, 0, n-1);
    cout << "排序后：\n"; // 输出排序后结果 
    for(int i=0;i<n;i++) cout << setw(3) << x[i]; 

    cout << endl << endl;   
	
    return 0; 
}

