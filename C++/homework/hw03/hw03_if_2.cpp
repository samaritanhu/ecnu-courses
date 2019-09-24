// 等级 --> 分数    
#include<iostream>

using namespace std; 

int main()
{
    char grade;

    cout << "请输入成绩(等级制，大写字母): " ;
    cin >> grade; 
    
    
    cout << "对应的分数是：" ;
    
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
        cout << "输入错误！" ;
    
    cout << endl; 
 
    return 0; 
}
