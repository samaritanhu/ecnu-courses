// �ı��ļ��Ķ�д 
#include <iostream>
#include <fstream>  

using namespace std;

int main()
{
	ifstream ifstrm;
	ofstream ofstrm;
	fstream  fstrm;
	
	// д�ı��ļ� 
	ofstrm.open("fout.txt");   // ȱʡģʽ��in, �ı��ļ� 
	ofstrm << "This is a test for writing file" << endl;
	ofstrm.close();
	
	char str1[20], str2[20];
	ifstrm.open("fout.txt");  // ȱʡģʽ��out, �ı��ļ� 
	ifstrm >> str1;  // ȱʡ�Կո�Ϊ������ 
	
	ifstrm.getline(str2,13);  // ��ȡ�������� 13 ���ַ� 
	
	cout << str1 << endl;
	cout << str2 << endl;
	
	ifstrm.close();
	
	// ׷��
	fstrm.open("fout.txt",ios::out|ios::app);
	fstrm << "This is appended text" << endl;
	fstrm.close(); 

	return 0;
}
