// 二进制文件中读取数据
#include <iostream>
#include <cstdlib>

using namespace std;

const int N=30;

int main()
{
    FILE * pf;
    double A[N][2];
    
    // 从二进制文件中读取数据 
    pf=fopen("data72.dat","rb");
    fread(A,sizeof(double),2*N,pf);
    fclose(pf);
    
    // 在屏幕上输出数据 
    for(int i=0; i<N; i++)
        printf("%.6f  %.6f\n", A[i][0], A[i][1]);
        
    // 向文本文件中写入数据 
    pf=fopen("data72.txt","wt");
    for(int i=0; i<N; i++)
        fprintf(pf,"%.6f  %.6f\n", A[i][0], A[i][1]);
    fclose(pf);

	return 0;
}


