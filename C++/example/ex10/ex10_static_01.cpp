// ��̬���ݳ�Ա  
#include<iostream>

using namespace std;

class Box
{
  public:
    Box(int, int);
    int volume( );
    static int height;    // �� height ����Ϊ���õľ�̬���ݳ�Ա
    int width;
    int length;
};

Box::Box(int wid, int len)   // ͨ�����캯���� width �� length ����ֵ
{
   width=wid; length=len;
}

int Box::volume() // �������  
{
   return(height*width*length);  // ֱ��ʹ�þ�̬���ݳ�Ա height
}

int Box::height=10; // �Ծ�̬���ݳ�Ա height ��ʼ��

int main() 
{
   Box a(15,20), b(20,30);
   
   cout<<a.height<<endl;  // ͨ������ a ���þ�̬���ݳ�Ա
   
   cout<<b.height<<endl;  // ͨ������ b ���þ�̬���ݳ�Ա
   
   cout<<Box::height<<endl; // ͨ���������þ�̬���ݳ�Ա
   
   cout<<a.volume()<<endl; // ������� 
   
   return 0;
}

