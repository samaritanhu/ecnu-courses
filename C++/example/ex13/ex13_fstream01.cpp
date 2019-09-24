// 文本文件的读写 
#include <iostream>
#include <fstream>  

using namespace std;

int main()
{
	ifstream ifstrm;
	ofstream ofstrm;
	fstream  fstrm;
	
	// 写文本文件 
	ofstrm.open("fout.txt");   // 缺省模式：in, 文本文件 
	ofstrm << "This is a test for writing file" << endl;
	ofstrm.close();
	
	char str1[20], str2[20];
	ifstrm.open("fout.txt");  // 缺省模式：out, 文本文件 
	ifstrm >> str1;  // 缺省以空格为结束符 
	
	ifstrm.getline(str2,13);  // 获取接下来的 13 个字符 
	
	cout << str1 << endl;
	cout << str2 << endl;
	
	ifstrm.close();
	
	// 追加
	fstrm.open("fout.txt",ios::out|ios::app);
	fstrm << "This is appended text" << endl;
	fstrm.close(); 

	return 0;
}
