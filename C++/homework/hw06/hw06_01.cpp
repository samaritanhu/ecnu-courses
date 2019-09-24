// 17 人围成一圈，编号 1～17，从1号开始报数，
// 报到3的倍数的人离开，一直数下去，
// 直到最后只剩一人，求此人编号

#include <iostream>
#include <iomanip>

using namespace std;

const int n=17;

int main()
{
  	int interval = 3;  // 间隔 
  	int a[n];
  	int i, j, k; 
  	
  	for(i=0; i<n; i++)
  	{
  		a[i] = i+1;
    	cout << a[i] <<" ";  // 赋值并输出 
	}
  	cout << endl << endl;
  	
  	k = 0;  // k 用于记录离开的人数 
 	for(i=0,j=0; ; i=(i+1)%n) 
	{
		if (a[i] != 0)  j = j+1; // 数数, 不包括已经离开的, 找到下一个离开的 
		if (j == interval) 
		{ 
			k = k+1;			
 			cout << "第 "<< setw(2) << k << " 个离开的是 "
			     << setw(2) << a[i] << " 号" << endl;
			if(k<n)
	 			a[i] = 0; // 离开后, 相应位置的值设为 0
	 		else
	 			break; // 当 k=n 时, 游戏结束 
			j = 0;  // 计数器清零 
 		}
 	}

  	cout << endl; 
  	cout <<"最后一个是: " << a[i] << " 号" << endl;   // 输出最后一个 

  	return 0;
}
