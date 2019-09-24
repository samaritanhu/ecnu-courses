/*
  编写函数 insert，实现下面功能：
  n 个数，已经从小到大排列。
  在主函数中输入一个数，调用 insert 函数，
  把输入的数插入到原有数列中，保持大小顺序，
  并将被挤出的最大数（有可能就是被插入数）返回给主函数输出。
*/
#include <iostream>

using namespace std;

int insert(int a[], int n, int x);

int main()
{
  	const int n = 10;
  	int a[n] = {12,29,34,56,59,72,83,88,91,93};
  	int x;
  	
  	cout <<"插入前的数组: ";
  	for(int i=0; i<n; i++)
    	cout << a[i] <<" ";
    cout << endl; 
  	
  	cout << "请输入一个数: ";
  	cin >> x;

  	int mymax;
	mymax = insert(a, n, x);
  	
  	cout << endl;
  	cout << "最大数: " << mymax <<endl;
  	cout << "插入后的数组: ";
  	for(int i=0; i<n; i++)
    	cout << a[i] << " ";
    cout << endl; 

  	return 0;
}

int insert(int a[], int n, int x)
{
  	if(a[n-1] <= x)  
	  	return x; // 被挤出的最大数为 x
  	
  	int y = a[n-1]; // 被挤出的最大数为 a[n-1] 
  	int i;
  	
  	for(i = n-2; i >= 0 && a[i] > x; i--)  // 从后往前, 直到找到 x 应该插入的位置 
    	a[i+1] = a[i];
    	
  	a[i+1] = x;
  	
  	return y;
}

