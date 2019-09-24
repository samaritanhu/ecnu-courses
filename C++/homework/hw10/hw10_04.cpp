// 字符易位破译: 字符串类实现
#include <iostream>
#include <string> // 不是 cstring 

using namespace std;

void sort(string & str) // 插入排序 
{ 
	int n=str.size();
    int k, i, key; 
    
    for(k=1; k<n; k++)
    {
		key = str[k];
		for(i=k-1; i>=0 && str[i]>key; i--)
		   str[i+1] = str[i]; 

		str[i+1] = key;
	}
} 

bool isAnagram(const string &s1, const string &s2)
{
	string str1=s1;
	string str2=s2;
	sort(str1);
	sort(str2);
	return (str1==str2);
}
int main()
{
	string s1[]={"silent","garden","split"};
	string s2[]={"listen","ranged","lisp"};
	for(int k=0; k<3; k++)
		if (isAnagram(s1[k],s2[k]))
			cout << s1[k] << " 与 " << s2[k] << " 是字母易位词\n";
		else 
			cout << s1[k] << " 与 " << s2[k] << " 不是字母易位词\n";	

	return 0;
}
