// ��С����
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

using namespace std; 

// �ҳ���Сֵ���ڵ�λ�� 
int my_min(int * px, int n)
{ 
    int idx=0, xmin=*px;
    for (int i=1; i<n; i++)
        if (*(px+i)<xmin)
            { xmin = *(px+i); idx=i; }
    return idx;
}

// ��С����
void sort_min(int * px, int n)
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
    int x[]={2, 8, 3, 12, 5, 20, 7, 14, 5, 16};
    int n, i;
        
    // ��ȡ���ݸ���  
    n = sizeof(x)/sizeof(x[0]); 
    
    cout << "x=\n"; // ���ԭʼ����  
    for(i=0;i<n;i++) cout << setw(3) << x[i]; 
    cout << endl << endl;
	  
    // ����
    sort_min(x, n);
    cout << "�����\n"; // ���������� 
    for(i=0;i<n;i++) cout << setw(3) << x[i]; 

    cout << endl << endl;   
	
    return 0; 
}

