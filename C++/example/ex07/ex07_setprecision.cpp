// 操纵符
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main()
{
    double a[3]={2.7182818, 31.416, 987000};

    cout << "设置有效数字个数：\n";
    cout << setprecision(3);  
	for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 
        
	cout << endl << endl;        
    cout << "设置小数点后位数：\n";
	cout << "(在 fixed 或 scientific 后) \n";
    cout << fixed; 
    for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 
            
    cout << endl << endl; 
	
    return 0; 
}
