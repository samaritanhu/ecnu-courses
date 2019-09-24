// 圆柱体的表面积和体积
#include <iostream>
#include <cmath>

using namespace std;

const double PI=3.14159265;

int main()
{
	double r, h, S, V;
  
	cout << "请输入圆柱体的半径和高:\n";
	cin >> r >> h;  

	S = 2*PI*r*r + 2*PI*r*h;  // 表面积 
	V = r*r*PI*h;           // 体积 

	cout << "表面积为：" << S << endl; 
	cout << "  体积为：" << V << endl;
  
	return 0;
}


