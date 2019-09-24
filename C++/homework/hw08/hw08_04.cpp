// ��������
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstdio>

using namespace std; 

// ��������
void sort_quick(int *px, int left, int right)  
{
	int pivot, i, j;
	  
    if (left < right)  
    {  
    	i = left; 
		j = right; 

        pivot = px[i]; // ���������еĵ�һ��Ԫ��Ϊ��׼��  
        
        while (i < j)  
        {   // ���������ҵ�һ��С�� pivot ����  
            while (i < j && px[j] >= pivot) 
                j--;    
                
            // ������� pivot С��Ԫ���Ƶ�ǰ�벿��
            if (i < j)
            {	px[i] = px[j]; i = i + 1; }

            // ���������ҵ�һ�����ڵ��� pivot ����  
            while (i < j && px[i] < pivot)   
                i++;    
            // ��������ڵ��� pivot ��Ԫ���Ƶ���벿��
            if (i < j)
			{ 	px[j] = px[i]; j = j - 1; }
        }  
        
        px[i] = pivot;  

        sort_quick(px, left, i - 1);   // �ݹ����   
        sort_quick(px, i + 1, right);  
    }  
}

int main()
{
    const int n=10;
    int x[n]={16,9,8,1,14,20,15,1,17,20}; // �������� 
    
    cout << "x=\n"; // ���ԭʼ����  
    for(int i=0;i<n;i++) cout << setw(3) << x[i]; 
    cout << endl << endl;
	  
    // ����
    sort_quick(x, 0, n-1);
    cout << "�����\n"; // ���������� 
    for(int i=0;i<n;i++) cout << setw(3) << x[i]; 

    cout << endl << endl;   
	
    return 0; 
}

