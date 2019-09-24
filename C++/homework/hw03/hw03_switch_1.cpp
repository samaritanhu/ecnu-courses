// 分数 -->  等级   
#include<iostream>

using namespace std; 

int main()
{
    int mark;

    cout << "请输入成绩(百分制): " ;
    cin >> mark; 
    
    if ( mark < 0 || mark > 100 )
 	{ 
        cout << "输入错误！\n" << endl; 
		return 1;  // 输入错误，退出程序 
    } 
    
    cout << "对应的等级是：" ;
    
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
