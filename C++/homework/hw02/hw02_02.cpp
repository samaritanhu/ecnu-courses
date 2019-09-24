/* 
银行提供两种 5年定期存款方式：
一年期方式：年利率为 10%, 每年到期后，自动将本年度的利息加入本金中; 
五年期方式：年利率为 11%，五年后本金和利息一起归还储户。
现分别以两种方式存入 100 万元，五年后各得多少？
*/ 
#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
    double x = 100.0; // 存款 
    double rate1 = 0.1, rate2 = 0.11; // 年利率 
    double y;
    
    // 一年期方式  
    y = x * pow((1 + rate1),5);
    cout << "一年期方式，五年后为：" << y << endl;    
    
    // 五年期方式  
    y = x + 5*x*rate2;
    cout << "五年期方式，五年后为：" << y << endl;   

    return 0; 
}
