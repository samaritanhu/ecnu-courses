// 字符易位破译：先排序后比较
// 注意：不能修改用户的输入，即原始的字符串
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

bool isAnagram(const char * const str1, const char * const str2);
void mysort(char * str); // 排序

int main()
{
	int N=20;
	char str1[N], str2[N];

    cout << "Input str1: "; cin >> str1;
    cout << "Input str2: "; cin >> str2;
	// strcpy(str1,"silent"); strcpy(str2,"silent");

    if( isAnagram(str1,str2) )
      cout << str1 << "和" << str2 << "是字母异位词\n";
    else
	  cout << str1 << "和" << str2 << "不是字母异位词\n";

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

void mysort(char * str) // 冒泡排序
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
	            // 注意，这里是交换，不是直接覆盖
			}
		if (flag==0) break; // 如果没有出现交换，则排序结束 
	}
}
