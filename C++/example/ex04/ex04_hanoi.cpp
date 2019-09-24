// 汉诺塔问题 
#include <iostream>

using namespace std;

void move(char src, char dest) // 移动一个盘子：从 src 到 dest 
{ 
    cout << src << "-->" << dest << endl;
}

void hanoi(int n, char src, char medium, char dest) // 移动多个盘子 
{
	// void move(char src, char dest);
	if (n==1)  
        move(src, dest);
	else
	{
	    hanoi(n-1, src, dest, medium); // 将上面 n-1 个盘子移到中间柱子上 
	    move(src, dest);   // 将最下面的一个盘子移到目标柱子上 
	    hanoi(n-1, medium, src, dest); // 将中间柱子上的盘子移到目标柱子上 
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
