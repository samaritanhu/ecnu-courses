// �ַ���λ���룺�������Ƚ�
// ע�⣺�����޸��û������룬��ԭʼ���ַ���
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

bool isAnagram(const char * const str1, const char * const str2);
void mysort(char * str); // ����

int main()
{
	int N=20;
	char str1[N], str2[N];

    cout << "Input str1: "; cin >> str1;
    cout << "Input str2: "; cin >> str2;
	// strcpy(str1,"silent"); strcpy(str2,"silent");

    if( isAnagram(str1,str2) )
      cout << str1 << "��" << str2 << "����ĸ��λ��\n";
    else
	  cout << str1 << "��" << str2 << "������ĸ��λ��\n";

	return 0;
}

bool isAnagram(const char * const str1, const char * const str2)
{
	int n = strlen(str1);

	if (strlen(str2) != n) 
		return false;

	char str11[n+1], str22[n+1];

/*
	for(int i=0; i<=n; i++)
	{
		str11[i]=str1[i];
		str22[i]=str2[i];
    }
*/
    strcpy(str11,str1);
	strcpy(str22,str2);

	mysort(str11);
	mysort(str22);

	return !strcmp(str11,str22);
}

void mysort(char * str) // ð������
{
	int n=strlen(str);
	int i, k, flag;
	char stmp;

	for(k=n-1; k>0; k--)
	{
		flag = 0;
	    for (i=0; i<k; i++)
	        if (str[i]>str[i+1])
	        { 
				flag = 1;
				stmp=str[i]; str[i]=str[i+1]; str[i+1]=stmp; 
	            // ע�⣬�����ǽ���������ֱ�Ӹ���
			}
		if (flag==0) break; // ���û�г��ֽ�������������� 
	}
}
