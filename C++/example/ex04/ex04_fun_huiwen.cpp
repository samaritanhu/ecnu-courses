// 回文数  
#include <iostream>

using namespace std;

bool issymm(long n);  // 函数声明 

int main()
{
    
    long m;

    for(m=11; m<1000; m++)
        if (issymm(m) && issymm(m*m) && issymm(m*m*m)) 
            cout << "m=" << m << ", m*m=" << m*m 
                 <<", m*m*m=" << m*m*m << endl;

	return 0;
}

bool issymm(long n)  // 判别是否回文数 
{
    long i, m;
    
    i=n;  
    m=0;
    
    while(i)
    {
        m = m*10 + i%10;
        i = i/10;
    }
    return ( m==n );
}
