// ���� --> �ȼ�  
#include<iostream>

using namespace std; 

int main()
{
    int mark;

    cout << "������ɼ�(�ٷ���): " ;
    cin >> mark; 
    
    if ( mark < 0 || mark > 100 )
 	{ 
        cout << "�������\n" << endl; 
		return 1; // ��������˳����� 
    } 
    
    cout << "��Ӧ�ĵȼ��ǣ�" ;
    
    if ( mark < 60 )
        cout << "E" ;
    else if ( mark < 70 )
        cout << "D" ;
    else if ( mark < 80 )
        cout << "C" ;
    else if ( mark < 90 )
  	    cout << "B" ;
    else if ( mark <=100 )
	    cout << "A" ;
    
    cout << endl; 
 
    return 0; 
}
