/*
  ��д���� insert��ʵ�����湦�ܣ�
  n �������Ѿ���С�������С�
  ��������������һ���������� insert ������
  ������������뵽ԭ�������У����ִ�С˳��
  ��������������������п��ܾ��Ǳ������������ظ������������
*/
#include <iostream>

using namespace std;

int insert(int a[], int n, int x);

int main()
{
  	const int n = 10;
  	int a[n] = {12,29,34,56,59,72,83,88,91,93};
  	int x;
  	
  	cout <<"����ǰ������: ";
  	for(int i=0; i<n; i++)
    	cout << a[i] <<" ";
    cout << endl; 
  	
  	cout << "������һ����: ";
  	cin >> x;

  	int mymax;
	mymax = insert(a, n, x);
  	
  	cout << endl;
  	cout << "�����: " << mymax <<endl;
  	cout << "����������: ";
  	for(int i=0; i<n; i++)
    	cout << a[i] << " ";
    cout << endl; 

  	return 0;
}

int insert(int a[], int n, int x)
{
  	if(a[n-1] <= x)  
	  	return x; // �������������Ϊ x
  	
  	int y = a[n-1]; // �������������Ϊ a[n-1] 
  	int i;
  	
  	for(i = n-2; i >= 0 && a[i] > x; i--)  // �Ӻ���ǰ, ֱ���ҵ� x Ӧ�ò����λ�� 
    	a[i+1] = a[i];
    	
  	a[i+1] = x;
  	
  	return y;
}

