// 分别用 数组名和指针 输出数组的元素 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int n = 5; 
    int a[n] = {0,2,4,6,8};
    
    // 第一种方式：数组名与下标 
    cout << "第一种方式：数组名与下标：\n" ;
    for (int i=0; i<n; i++)
        cout << a[i] << ",";
    cout << "\n\n" ;
    
    // 第二种方式：数组名与指针运算 
    cout << "第二种方式：数组名与指针运算：\n" ;
    for (int i=0; i<n; i++)
        cout << *(a+i) << ",";
    cout << "\n\n" ;
    
    // 第三种方式：指针与指针运算 
    cout << "第三种方式：指针：\n" ;
    for (int *pa=a; pa<a+n; pa++)
        cout << *pa << ",";
    cout << "\n\n" ; 

    // 第三种方式：指针与数组运算 
    cout << "第三种方式：指针(二)：\n" ;
    for (int *pa=a, i=0; i<n; i++)
        cout << pa[i] << "," ; 
     cout << "\n\n" ;    

	return 0;
}
