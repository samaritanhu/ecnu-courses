// ��������� 
#include <iostream>
#include <iomanip>

using namespace std;

const int N=100;

int main()
{
	int L[N] = {0}; // ��Ǵ����״̬��ż���رգ��������� 
	int k, j;
	
	for (k=0; k<N; k++)	
    	for (j=k; j<N; j=j+k+1)
			L[j] = L[j]+1; // ��¼״̬�任  

    // ������
	cout << "���������״̬: \n";
	for (k = 0; k < N; k++)	
    	if (L[k]%2 == 1)
			cout << setw(3) << k+1 << ": ����\n";
		 
	return 0;
}

