// 分数 --> 等级  
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
		return 1; // 输入错误，退出程序 
    } 
    
    cout << "对应的等级是：" ;
    
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
