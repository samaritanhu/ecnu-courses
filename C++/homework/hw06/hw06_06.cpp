// ��������һά���� a �� b��
// ���� a �е�����������ģ��� b �е����ݰ��������С�
// ͳ�� a ������Ԫ���У����� b �ĵ� k ��Ԫ����
// С�ڵ� k+1 ��Ԫ�ص����ݸ���
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int m = 10, n = 5;
	int a[m] = {98,12,34,71,43,54,28,33,65,56};
    int b[n] = {10,30,50,80,100};
    int c[n-1] = {0};
    int i, k;

    for(i=0; i<m; i++)
        for(k=0; k<n-1; k++)
            if (a[i]>b[k] && a[i]<b[k+1])
            { c[k] = c[k] + 1; break; }

    cout << "c = ";
    for(k=0; k<n-1; k++)
        cout << c[k] << " " ;
    cout << endl;

	return 0;
}
