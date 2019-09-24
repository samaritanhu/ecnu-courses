// ��С����
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cstdio>

using namespace std; 

// �ҳ���Сֵ���ڵ�λ�� 
int my_min(int *px, int n)
{ 
    int idx=0, xmin=*px;
    for (int i=1; i<n; i++)
        if (*(px+i)<xmin)
            { xmin = *(px+i); idx=i; }
    return idx;
}

// ��С����
void sort_min(int *px, int n)
{
    int idx, t; 
    for(int k=0; k<n-1 ; k++)
    {
        idx = my_min(px+k,n-k);  // �ҳ�δ���򲿷ֵ���Сֵ��������λ��
        if (idx!=0)  // ����
        {  t=px[k]; px[k]=px[k+idx]; px[k+idx]=t; } 
    }
}


int main()
{
    const int n=100000;
    int x[n], i;
    clock_t t0, t1;
    double tt, error;
        
    // ��ȡ����  
    FILE *pf;    
    pf = fopen("data100000.dat","rb");
    fread(x,sizeof(int),n, pf);
    fclose(pf);
  
    // ������ȷ��� 
    int xt[n];
    pf = fopen("data100000sorted.dat","rb");
    fread(xt,sizeof(int),n, pf);
    fclose(pf);    

    // ����ͳ��ʱ�� 
    cout << "��С����\n";
    t0 = clock();
    sort_min(x, n);
    tt = (double)(clock()-t0)/CLOCKS_PER_SEC;
    cout << "\nTime=" << tt << endl;

    // �������  
    error=0;
    for(i=0;i<n;i++) error=error+abs(x[i]-xt[i]); 
    cout << "\nError=" << error << endl;
    
    cout << endl;  
	
    return 0; 
}

