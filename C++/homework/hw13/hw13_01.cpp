// 二进制文件的读写 
#include <iostream>
#include <fstream>  
#include <ctime> 
#include <cstdlib>
#include <iomanip>

using namespace std;

const int n=6;

int main()
{
    double A[n][n];
    int i, j;
    
	srand(time(0));
	for (i=0; i<n; i++)
	for (j=0; j<n; j++)
		A[i][j] = double(rand())/RAND_MAX; 

    // 在屏幕上输出数据 
    cout << "A=\n"; 
    cout << fixed << setprecision(3);
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
        	cout << setw(8) <<  A[i][j];
        cout << endl;
	}
	cout << endl;
	
    // 写入到文本文件中: 将 cout 改为 文件流对象 即可 
    fstream fstrm; 
 	fstrm.open("fout01.txt",ios::out);  
    fstrm << "A=\n"; 
    fstrm << fixed << setprecision(3);
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
        	fstrm << setw(8) <<  A[i][j];
        fstrm << endl;
	}
	fstrm.close();   

	// 开始写入数据 
	fstrm.open("fout01.dat",ios::out|ios::binary);
	fstrm.write((char*)A,sizeof(A));
	fstrm.close();
	
	// 从二进制文件中读取数据 
	double B[2][n]={0};
	cout << "Before: B=\n";
	for (i=0; i<2; i++)
	{
		for (j=0; j<n; j++)
        	cout << setw(8) << B[i][j];
        cout << endl;
	}
	cout << endl;
		
	// 开始读取数据 
	fstrm.open("fout01.dat",ios::in|ios::binary);
	fstrm.read((char*)B,sizeof(B));
	fstrm.close();
	
	cout << "After: B=\n";
	for (i=0; i<2; i++)
	{
		for (j=0; j<n; j++)
        	cout << setw(8) << B[i][j];
        cout << endl;
	}
	cout << endl;

	return 0;
}
