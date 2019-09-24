// 最小排序
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

using namespace std; 

// 找出最小值所在的位置 
int my_min(int * px, int n)
{ 
    int idx=0, xmin=*px;
    for (int i=1; i<n; i++)
        if (*(px+i)<xmin)
            { xmin = *(px+i); idx=i; }
    return idx;
}

// 最小排序
void sort_min(int * px, int n)
{
    int idx, t; 
    for(int k=0; k<n-1 ; k++)
    {
        idx = my_min(px+k,n-k);  // 找出未排序部分的最小值及其所在位置
        if (idx!=0)  // 交换
        {  t=px[k]; px[k]=px[k+idx]; px[k+idx]=t; } 
    }
}


int main()
{
    int x[]={2, 8, 3, 12, 5, 20, 7, 14, 5, 16};
    int n, i;
        
    // 获取数据个数  
    n = sizeof(x)/sizeof(x[0]); 
    
    cout << "x=\n"; // 输出原始数据  
    for(i=0;i<n;i++) cout << setw(3) << x[i]; 
    cout << endl << endl;
	  
    // 排序
    sort_min(x, n);
    cout << "排序后：\n"; // 输出排序后结果 
    for(i=0;i<n;i++) cout << setw(3) << x[i]; 

    cout << endl << endl;   
	
    return 0; 
}

