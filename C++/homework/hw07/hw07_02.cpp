// �������ļ��ж�ȡ����
#include <iostream>
#include <cstdlib>

using namespace std;

const int N=30;

int main()
{
    FILE * pf;
    double A[N][2];
    
    // �Ӷ������ļ��ж�ȡ���� 
    pf=fopen("data72.dat","rb");
    fread(A,sizeof(double),2*N,pf);
    fclose(pf);
    
    // ����Ļ��������� 
    for(int i=0; i<N; i++)
        printf("%.6f  %.6f\n", A[i][0], A[i][1]);
        
    // ���ı��ļ���д������ 
    pf=fopen("data72.txt","wt");
    for(int i=0; i<N; i++)
        fprintf(pf,"%.6f  %.6f\n", A[i][0], A[i][1]);
    fclose(pf);

	return 0;
}


