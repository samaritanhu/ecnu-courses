// ��̬�ֲ�����  
#include<iostream>
#include<ctime>

using namespace std; 

int k; // ȫ�ֱ�������̬�����ڣ���ֵΪ 0 
 
int main()
{
    int x=5;
    
    cout << "k=" << k << "\n" << endl; // û�г�ʼ���ľ�̬�����Զ���ֵΪ 0 
    
    int my_plus(int x); // ��������     
    cout << "x+i=" << my_plus(x) << "\n" << endl;
    cout << "x+i=" << my_plus(x) << "\n" << endl;    
    
    return 0; 
}

int my_plus(int x)
{
    static int i=6;  
    // ��̬�ֲ���������ֵΪ 5��ֻ�ܳ�ʼ��һ�Σ��ڶ��ε��øú���ʱ���ٳ�ʼ���� 
    
    i = x +i; 
    return i;
}
