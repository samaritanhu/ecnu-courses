// 17 ��Χ��һȦ����� 1��17����1�ſ�ʼ������
// ����3�ı��������뿪��һֱ����ȥ��
// ֱ�����ֻʣһ�ˣ�����˱��

#include <iostream>
#include <iomanip>

using namespace std;

const int n=17;

int main()
{
  	int interval = 3;  // ��� 
  	int a[n];
  	int i, j, k; 
  	
  	for(i=0; i<n; i++)
  	{
  		a[i] = i+1;
    	cout << a[i] <<" ";  // ��ֵ����� 
	}
  	cout << endl << endl;
  	
  	k = 0;  // k ���ڼ�¼�뿪������ 
 	for(i=0,j=0; ; i=(i+1)%n) 
	{
		if (a[i] != 0)  j = j+1; // ����, �������Ѿ��뿪��, �ҵ���һ���뿪�� 
		if (j == interval) 
		{ 
			k = k+1;			
 			cout << "�� "<< setw(2) << k << " ���뿪���� "
			     << setw(2) << a[i] << " ��" << endl;
			if(k<n)
	 			a[i] = 0; // �뿪��, ��Ӧλ�õ�ֵ��Ϊ 0
	 		else
	 			break; // �� k=n ʱ, ��Ϸ���� 
			j = 0;  // ���������� 
 		}
 	}

  	cout << endl; 
  	cout <<"���һ����: " << a[i] << " ��" << endl;   // ������һ�� 

  	return 0;
}
