// ����ʾ�����������ַ���ת��Ϊʮ������
// ע�⣺����ֱ�ӽ��ַ���������ת��Ϊ������������ʹ�� atoi ����
#include <iostream>
#include <iomanip>
#include <cstdlib> // atoi ������Ҫ��ͷ�ļ� 

using namespace std;

int bin2dec(const char * const str);

int main()
{
    char str[101];
    int num;

    cout << "�������������(���Ȳ����� 100)��";
    cin >> str;

    num = bin2dec(str);

    cout << "��Ӧ��ʮ������Ϊ��" << num;

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

