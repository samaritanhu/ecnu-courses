// �鸸��  
#include <iostream>
#include <string>

using namespace std;


class Person // �������� Person
{
  public:
    Person(string nam,char s,int a)  // ���캯��
    {name=nam; sex=s; age=a;} 

  protected:  // ������Ա
    string name;
    char sex;
    int age;
};

// ֱ�������� Teacher
class Teacher:virtual public Person  // ���� Person Ϊ���ü̳е��鸸��
{
  public:                                
    Teacher(string nam,char s,int a, string t):Person(nam,s,a) // ���캯��
    { title=t; }
  protected:  
    string title;  // ְ��
};

// ֱ�������� Student
class Student:virtual public Person  //���� Person Ϊ���ü̳е��鸸��
{
  public:
    Student(string nam, char s, int a, float sco)  // ���캯��
      : Person(nam,s,a), score(sco){}  // ��ʼ����
  protected:  
    float score;  // �ɼ�
};

// ���ؼ̳е������� Graduate
class Graduate:public Teacher, public Student  // Teacher �� Student Ϊֱ�Ӹ���
{
  public:
    Graduate(string nam,char s,int a, string t,float sco,float w) // ���캯��
      : Person(nam,s,a), Teacher(nam,s,a,t), Student(nam,s,a,sco), wage(w){} // ��ʼ����
   void show()  // ����о������й�����
   {
      cout << "name:" << name << endl;
      cout << "age:" << age << endl;
      cout << "sex:" << sex << endl;
      cout << "score:" << score << endl;
      cout << "title:" << title << endl;
      cout << "wages:" << wage << endl;
   }
  private:
    float wage;  // ����
};

// ������
int main()
{
    Graduate grad1("Xi Jiajia",'f',24,"assistant",89.5,1234.5);
    grad1.show();
    return 0;
}
