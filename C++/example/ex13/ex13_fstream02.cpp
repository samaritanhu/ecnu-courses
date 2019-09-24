// 二进制文件的读写 
#include <iostream>
#include <fstream>  

using namespace std;

const int n=5;
int main()
{
	int A[n]={1,2,3,4,5};

	cout << "A=\n ";
	for(int i=0; i<n; i++)
		cout << A[i] << " ";
	cout << endl << endl;

	fstream fstrm("fout.dat",ios::out|ios::binary);
	
	fstrm.write((char*)A,sizeof(A));
	fstrm.close();
	
	int B[n]={0};
	cout << "Before: B=\n ";
	for(int i=0; i<n; i++)
		cout << B[i] << " ";
	cout << endl << endl;
		
	fstrm.open("fout.dat",ios::in|ios::binary);
	fstrm.read((char*)B,sizeof(B));
	fstrm.close();
	
	cout << "After: B=\n ";
	for(int i=0; i<n; i++)
		cout << B[i] << " ";
	cout << endl;

	return 0;
}
