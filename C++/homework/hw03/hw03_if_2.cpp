// �ȼ� --> ����    
#include<iostream>

using namespace std; 

int main()
{
    char grade;

    cout << "������ɼ�(�ȼ��ƣ���д��ĸ): " ;
    cin >> grade; 
    
    
    cout << "��Ӧ�ķ����ǣ�" ;
    
    if ( grade == 'A' )
        cout << "90--100" ;
    else if ( grade == 'B' )
        cout << "80--89" ;
    else if ( grade == 'C' )
        cout << "70--79" ;
    else if ( grade == 'D' )
  	    cout << "60--69" ;
    else if ( grade == 'E' )
	    cout << "0--59" ;
    else
        cout << "�������" ;
    
    cout << endl; 
 
    return 0; 
}
