// ��ʱ������ʹ��ʾ�� 
#include<iostream>
#include<ctime>

using namespace std; 

const int n=20000; 

int main()
{
    time_t t0, t1;
    int i, j, a;
    
    t0 = time(NULL);
    
    //����ʼ
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            a = (i+1)*(j+1);       
    // ������� 
    
    t1 = time(NULL);

    cout << "����ʱ�䣺" << t1-t0 << " �룡" << endl;
    
    return 0; 
}
