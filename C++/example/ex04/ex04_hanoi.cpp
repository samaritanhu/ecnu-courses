// ��ŵ������ 
#include <iostream>

using namespace std;

void move(char src, char dest) // �ƶ�һ�����ӣ��� src �� dest 
{ 
    cout << src << "-->" << dest << endl;
}

void hanoi(int n, char src, char medium, char dest) // �ƶ�������� 
{
	// void move(char src, char dest);
	if (n==1)  
        move(src, dest);
	else
	{
	    hanoi(n-1, src, dest, medium); // ������ n-1 �������Ƶ��м������� 
	    move(src, dest);   // ���������һ�������Ƶ�Ŀ�������� 
	    hanoi(n-1, medium, src, dest); // ���м������ϵ������Ƶ�Ŀ�������� 
	}
}

int main()
{
	// void hanoi(int n, char src, char medium, char dest) ;
	int m;
	
	cout << "Enter the number of diskes: " ;
	cin >> m;
	cout << "the steps to moving " << m << " diskes:" << endl;
	hanoi(m,'A','B','C');

	return 0;
}
