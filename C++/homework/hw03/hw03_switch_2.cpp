// 等级 --> 分数    
#include<iostream>

using namespace std; 

int main()
{
    char grade;

    cout << "请输入成绩(等级制，大写字母): " ;
    cin >> grade; 
    
    
    cout << "对应的分数是：" ;
    
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
			cout << "输入错误！" ;
	}

    cout << endl; 
 
    return 0; 
}
