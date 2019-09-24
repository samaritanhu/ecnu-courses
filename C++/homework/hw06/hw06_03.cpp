// �����С��ǰ 100 ������
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int N = 100;

bool isprime(int n);

int main()
{
	int k=0; // ��¼��������
	int p[N], n;

    for (n=2; k<N; n++)
		if (isprime(n))
	  	{  p[k] = n; k++; }

	// �������
	cout << "��һ�ַ�ʽ��������+�±�\n";
	for (k=0; k<N; k++)  // ��һ�ַ�ʽ��������+�±�
	{
	    cout << setw(4) << p[k];
	    if ((k+1)%10==0) cout << endl;
	}
    cout << endl;

    cout << "�ڶ��ַ�ʽ��������+ָ������\n";
	for (k=0; k<N; k++)   // �ڶ��ַ�ʽ��������+ָ������
	{
		cout << setw(4) << *(p+k);
	    if ((k+1)%10==0) cout << endl;
	}
	cout << endl;

    cout << "�����ַ�ʽ��ָ��+ָ������\n";
    int * pp;
	for (k=0, pp=p; pp<p+N; pp++)  // �����ַ�ʽ��ָ��+ָ������
	{
		cout << setw(4) << *pp;
		k = k + 1;
	    if (k%10==0) cout << endl;
	}
	cout << endl;

	return 0;
}

bool isprime(int n)
{
    if (n<2) return false;

	for (int k=2; k<=sqrt(n); k++)
		if (n%k==0) return false;

	return true;
}
