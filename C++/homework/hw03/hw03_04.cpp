// ��ʾ��ȥ���
// ˼��������� float �� long double����������� 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n=5000000, k;
    double s1=0.0, s2=0.0;
    	
	for (k=n; k>0; k--)	
	    s1 = s1 + 1.0/k;  // ��Ҫд�� 1/k 
	    
	for (k=1; k<=n; k++)	
	    s2 = s2 + 1.0/k;
			
	cout << fixed;    
	cout << setprecision(15);	
	cout << "�Ӻ���ǰ��" << s1 << endl; 
	cout << "��ǰ����" << s2 << endl; 	    

	return 0;
}
