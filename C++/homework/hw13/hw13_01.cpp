// �������ļ��Ķ�д 
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

    // ����Ļ��������� 
    cout << "A=\n"; 
    cout << fixed << setprecision(3);
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
        	cout << setw(8) <<  A[i][j];
        cout << endl;
	}
	cout << endl;
	
    // д�뵽�ı��ļ���: �� cout ��Ϊ �ļ������� ���� 
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

	// ��ʼд������ 
	fstrm.open("fout01.dat",ios::out|ios::binary);
	fstrm.write((char*)A,sizeof(A));
	fstrm.close();
	
	// �Ӷ������ļ��ж�ȡ���� 
	double B[2][n]={0};
	cout << "Before: B=\n";
	for (i=0; i<2; i++)
	{
		for (j=0; j<n; j++)
        	cout << setw(8) << B[i][j];
        cout << endl;
	}
	cout << endl;
		
	// ��ʼ��ȡ���� 
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
