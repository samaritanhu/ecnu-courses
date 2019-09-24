// 演示消去误差
// 思考：如果用 float 或 long double，结果会怎样 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n=5000000, k;
    double s1=0.0, s2=0.0;
    	
	for (k=n; k>0; k--)	
	    s1 = s1 + 1.0/k;  // 不要写成 1/k 
	    
	for (k=1; k<=n; k++)	
	    s2 = s2 + 1.0/k;
			
	cout << fixed;    
	cout << setprecision(15);	
	cout << "从后往前：" << s1 << endl; 
	cout << "从前往后：" << s2 << endl; 	    

	return 0;
}
