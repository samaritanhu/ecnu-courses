// ��д�����������ֱ���ѭ���͵ݹ����һ����������������֮�͡�
// �����������зֱ������������������ 2012112118 ����������֮��
#include <iostream>
#include <cstdlib>

using namespace std;

int sum_loop(long x)
{
	int s = 0;
	while(x!=0)
	{
		s = s + x%10;
		x = x/10;
	}
	return s;
}

int sum_recursion(long x)
{
	if (x/10==0)
		return x;
	else 
		return sum_recursion(x/10) + x%10;
}

int main()
{
    int x=2012112118;
    
    cout << "ʹ��ѭ��: " << sum_loop(x) << endl;
    cout << "ʹ�õݹ�: " << sum_recursion(x) << endl;
    
	return 0;
}


