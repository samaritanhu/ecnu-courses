// ���� -->  �ȼ�   
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
		return 1;  // ��������˳����� 
    } 
    
    cout << "��Ӧ�ĵȼ��ǣ�" ;
    
    switch (mark/10)
	{
		case 10:
		case 9:
			cout << "A" ; break;
		case 8:
			cout << "B" ; break;
		case 7:
			cout << "C" ; break;
		case 6:
  			cout << "D" ; break;
		default :
			cout << "E" ;
	}

    cout << endl; 
 
    return 0; 
}
