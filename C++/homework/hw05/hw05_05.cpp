// �ҳ���Сֵ�����±� 
#include <iostream>

using namespace std;

int findmin(int a[], int n);

int main()
{
	const int n = 10;
	int x[n] = {34,91,83,56,29,93,56,12,88,72};
  	int k;
  
  	k = findmin(x, n);

  	cout <<"��С��: " << x[k] << ", ��Ӧ���±�: " << k << endl;

  	return 0;
}

int findmin(int a[], int n)
{
  	int index = 0;
  	for (int i=1; i<n; i++)
    	if (a[i] < a[index]) 
	  		index = i;

  	return index;
}

