// ����׳�  
// ��ͨ��ʽ�͵ݹ鷽ʽ
#include <iostream>

using namespace std;
 
int my_prod1(int n);  // ��ͨ��ʽ 
int my_prod2(int n);  // �ݹ鷽ʽ 
 
int main()
{
	int n, y;
	cout << "������ n: ";
	cin >> n;
	
	y = my_prod1(n);
    	
    cout << "��ͨ��ʽ��" << n << "!=" << y << endl;
    
	y = my_prod2(n);
    cout << "�ݹ鷽ʽ��" << n << "!=" << y << endl;

	return 0;
}

int my_prod1(int n)  // ��ͨ��ʽ 
{
    int y = 1;
    
    for (int i=1; i<=n; i++)
        y = y * i;
        
    return y;
}

int my_prod2(int n)  // �ݹ鷽ʽ
{
    if (n==0) return 1;
    else return n*my_prod2(n-1);
}
 

