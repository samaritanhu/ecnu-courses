/*
  goto
  һ����Ȼ����ֵ�����������λ�ϵ����ĺ͵� 4 ����
  �����������������С�Ķ�λ���� 
*/ 
#include <iostream>

using namespace std;

int main()
{
	int i, j;
	
	for (i=1; i <= 9; i++)
	    for (j=0; j <= 9; j++)
		    if (10*i+j == 4*(i+j))
		    goto outfor;
		    
	outfor:	cout << "����Ҫ�������: " << 10*i+j << endl;
	
	return 0;
}
