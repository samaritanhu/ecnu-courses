// 计算阶乘  
// 普通方式和递归方式
#include <iostream>

using namespace std;
 
int my_prod1(int n);  // 普通方式 
int my_prod2(int n);  // 递归方式 
 
int main()
{
	int n, y;
	cout << "请输入 n: ";
	cin >> n;
	
	y = my_prod1(n);
    	
    cout << "普通方式：" << n << "!=" << y << endl;
    
	y = my_prod2(n);
    cout << "递归方式：" << n << "!=" << y << endl;

	return 0;
}

int my_prod1(int n)  // 普通方式 
{
    int y = 1;
    
    for (int i=1; i<=n; i++)
        y = y * i;
        
    return y;
}

int my_prod2(int n)  // 递归方式
{
    if (n==0) return 1;
    else return n*my_prod2(n-1);
}
 

