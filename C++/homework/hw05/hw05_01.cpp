// 计算平均值和标准偏差
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

double mean(double x[], int n); // 计算平均值
double deviation(double x[], int n); // 计算标准偏差

int main()
{
	int n=10, k;    
	double x[10], my_mean, my_devi;
	
	srand(time(0));
	for (k=0; k<n; k++)
		x[k] = double(rand())/RAND_MAX*100; 
	
    my_mean = mean(x,n);
    my_devi = deviation(x,n);
	cout << "平均值为：" << my_mean << endl;
	cout << "标准偏差为：" << my_devi << endl;		
	
	return 0;
}

double mean(double x[], int n) // 计算平均值
{
	double sum=0.0;
		
	for (int k=0; k<n; k++)
	  sum = sum + x[k];
	
	return sum/n;	  
}

double deviation(double x[], int n) // 计算标准偏差
{
	double mymean, sum_square=0.0; 

    mymean = mean(x,n);
	for (int k=0; k<n; k++)
	{
		sum_square = sum_square + pow(x[k] - mymean, 2);
	}  
	
	return sqrt(sum_square/(n-1));
	
	
// 计算标准差的另一种公式 
//	double sum = 0, my_deviation;
//	sum_square = 0.0;
//	for (int k=0; k<n; k++)
//	{
//		sum = sum + x[k];
//		sum_square = sum_square + x[k]*x[k];
//	}  
//	
//	my_deviation = sum_square - sum*sum/n;
//	my_deviation = sqrt(my_deviation/(n-1));
//	
//	return my_deviation;
}

