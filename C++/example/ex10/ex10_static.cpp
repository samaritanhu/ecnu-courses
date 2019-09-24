// 静态数据成员  
#include<iostream>

using namespace std;

class Box
{
  public:
    Box(int, int);
    int volume( );
    static int height;    // 把 height 定义为公用的静态数据成员
    int width;
    int length;
};

Box::Box(int wid, int len)   // 通过构造函数对 width 和 length 赋初值
{
   width=wid; length=len;
}

int Box::volume() // 计算体积  
{
   return(height*width*length);  // 直接使用静态数据成员 height
}

int Box::height=10; // 对静态数据成员 height 初始化

int main() 
{
   Box a(15,20), b(20,30);
   
   cout<<a.height<<endl;  // 通过对象 a 引用静态数据成员
   
   cout<<b.height<<endl;  // 通过对象 b 引用静态数据成员
   
   cout<<Box::height<<endl; // 通过类名引用静态数据成员
   
   cout<<a.volume()<<endl; // 计算体积 
   
   return 0;
}

