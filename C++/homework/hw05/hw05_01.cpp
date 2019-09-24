// ����ƽ��ֵ�ͱ�׼ƫ��
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

double mean(double x[], int n); // ����ƽ��ֵ
double deviation(double x[], int n); // �����׼ƫ��

int main()
{
	int n=10, k;    
	double x[10], my_mean, my_devi;
	
	srand(time(0));
	for (k=0; k<n; k++)
		x[k] = double(rand())/RAND_MAX*100; 
	
    my_mean = mean(x,n);
    my_devi = deviation(x,n);
	cout << "ƽ��ֵΪ��" << my_mean << endl;
	cout << "��׼ƫ��Ϊ��" << my_devi << endl;		
	
	return 0;
}

double mean(double x[], int n) // ����ƽ��ֵ
{
	double sum=0.0;
		
	for (int k=0; k<n; k++)
	  sum = sum + x[k];
	
	return sum/n;	  
}

double deviation(double x[], int n) // �����׼ƫ��
{
	double mymean, sum_square=0.0; 

    mymean = mean(x,n);
	for (int k=0; k<n; k++)
	{
		sum_square = sum_square + pow(x[k] - mymean, 2);
	}  
	
	return sqrt(sum_square/(n-1));
	
	
// �����׼�����һ�ֹ�ʽ 
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

