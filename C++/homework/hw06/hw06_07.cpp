// 将表示二进制数的字符串转化为十进制数
// 注意：不能直接将字符串按字面转化为整数，即不能使用 atoi 函数
#include <iostream>
#include <iomanip>
#include <cstdlib> // atoi 函数需要该头文件 

using namespace std;

int bin2dec(const char * const str);

int main()
{
    char str[101];
    int num;

    cout << "请输入二进制数(长度不超过 100)：";
    cin >> str;

    num = bin2dec(str);

    cout << "对应的十进制数为：" << num;

	cout << endl << endl;

	return 0;
}

int bin2dec(const char * const str)
{
	int num=0, i=0;

	while (str[i] != '\0')
	{	num = num * 2 + str[i]-'0';  i++; }

	return num;
}

