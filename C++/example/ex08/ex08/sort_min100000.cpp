// 最小排序
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cstdio>

using namespace std; 

// 找出最小值所在的位置 
int my_min(int *px, int n)
{ 
    int idx=0, xmin=*px;
    for (int i=1; i<n; i++)
        if (*(px+i)<xmin)
            { xmin = *(px+i); idx=i; }
    return idx;
}

// 最小排序
void sort_min(int *px, int n)
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
    const int n=100000;
    int x[n], i;
    clock_t t0, t1;
    double tt, error;
        
    // 读取数据  
    FILE *pf;    
    pf = fopen("data100000.dat","rb");
    fread(x,sizeof(int),n, pf);
    fclose(pf);
  
    // 读入正确结果 
    int xt[n];
    pf = fopen("data100000sorted.dat","rb");
    fread(xt,sizeof(int),n, pf);
    fclose(pf);    

    // 排序并统计时间 
    cout << "最小排序：\n";
    t0 = clock();
    sort_min(x, n);
    tt = (double)(clock()-t0)/CLOCKS_PER_SEC;
    cout << "\nTime=" << tt << endl;

    // 结果测试  
    error=0;
    for(i=0;i<n;i++) error=error+abs(x[i]-xt[i]); 
    cout << "\nError=" << error << endl;
    
    cout << endl;  
	
    return 0; 
}

