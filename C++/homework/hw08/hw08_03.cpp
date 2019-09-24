// ð������ 
#include <iostream>
#include <iomanip>

using namespace std;

// �Ż����ð������
void sort_bubble(int * px, int n)
{ 
    int k, flag, key; 
    
    for(k=n-1; k>0; k--)
    {
		flag = 0;
		for (int i=0; i<k; i++)
			if (px[i] > px[i+1])
			{
				flag = 1;
				key = px[i]; 
				px[i] = px[i+1]; 
				px[i+1] = key; 
			}
		if(flag==0) break; // ���û�г��ֽ��������������
	}
} 

// ð������Ľ�һ���Ż�
void sort_bubble2(int * px, int n)  
{  
    int k, key, idx; 
    
    idx = n-1;  // ��¼���һ�ν���������λ�� 
    while (idx > 0)  
    {  
        k = idx;  
        idx = 0;  
        for (int i=0; i < k; i++)  
            if (px[i] > px[i+1])  
            {  
				idx = i;
                key = px[i]; 
				px[i] = px[i+1]; 
				px[i+1] = key; 
            }  
    }  
}  

int main()
{
    const int n=10;
    int x[n]={16,9,8,1,14,20,15,1,17,20}; // �������� 
    
	cout << "����ǰ: "; // ���ԭʼ����  
	for(int i=0; i<n; i++) cout << setw(4) << x[i];

	sort_bubble(x, n);
	
	cout << "\n�����: ";
	for(int i=0; i<n; i++) cout << setw(4) << x[i];
	
	return 0;
}

