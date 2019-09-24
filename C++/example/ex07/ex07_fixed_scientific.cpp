// 操纵符
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main()
{
    double a[3]={2.7182818, 31.416, 987000};

    cout << "以定点格式输出 \n";
    cout << fixed;  // 以定点格式输出
    for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 

	cout << endl << endl;
    cout << "以指数形式输出 \n";
    cout << scientific;  // 以指数形式输出
    for (int i=0; i<3; i++)   
        cout << a[i] << ", "; 

    cout << "\n" << endl;   
	
    return 0; 
}
