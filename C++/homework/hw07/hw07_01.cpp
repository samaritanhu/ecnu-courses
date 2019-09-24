// 数据的读写 
#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

const int N=6;

int main()
{
    FILE * pf;
    double A[N][N];
    int i, j;
    
	srand(time(0));
	for (i=0; i<N; i++)
	for (j=0; j<N; j++)
		A[i][j] = double(rand())/RAND_MAX; 

    // 在屏幕上输出数据 
    cout << "A=\n";
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
        	printf("%.6f  ", A[i][j]);
        printf("\n");
	}
	
    // 写入到文本文件中 
    pf=fopen("out71.txt","wt");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
        	fprintf(pf,"%.6f  ", A[i][j]);
        fprintf(pf,"\n");
	}
    fclose(pf);
	
    // 写入到二进制文件中 
    pf=fopen("data71.dat","wb");
	fwrite(A,sizeof(A),1,pf);
    fclose(pf);
			    
    // 从二进制文件中读取数据 
    int M=2;
    double B[M][N];
    pf=fopen("data71.dat","rb");
    fread(B,sizeof(double),M*N,pf);
    fclose(pf);
    
    // 在屏幕上输出数据 
    cout << endl;
    cout << "B=\n";
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
        	printf("%.6f  ", B[i][j]);
        printf("\n");
	}

	return 0;
}


