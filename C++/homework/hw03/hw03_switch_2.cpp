// �ȼ� --> ����    
#include<iostream>

using namespace std; 

int main()
{
    char grade;

    cout << "������ɼ�(�ȼ��ƣ���д��ĸ): " ;
    cin >> grade; 
    
    
    cout << "��Ӧ�ķ����ǣ�" ;
    
    switch (grade)
	{
		case 'A':
			cout << "90--100" ; break;
		case 'B':
			cout << "80--89" ; break;
		case 'C':
			cout << "70--79" ; break;
		case 'D':
  			cout << "60--69" ; break;
		case 'E':
			cout << "0--59" ; break;
		default :
			cout << "�������" ;
	}

    cout << endl; 
 
    return 0; 
}
