// 计时函数的使用示例 
#include<iostream>
#include<ctime>

using namespace std; 

const int n=20000; 

int main()
{
    clock_t t0, t1;
    double totaltime;
    int i, j, a;
    
    t0 = clock();
    
    //程序开始
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            a = (i+1)*(j+1);       
    // 程序结束 
    
    t1 = clock();
    
    totaltime = (double)(t1-t0)/CLOCKS_PER_SEC;
    cout << "运行时间为：" << totaltime << " 秒！" << endl;
    
    return 0; 
}
