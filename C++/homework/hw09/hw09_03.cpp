// ������ 
#include<iostream>
#include<string>

using namespace std;

class Score
{
  public:
    Score(int x, int y) { math = x; eng = y; }
    void show();
  private:
    int math, eng;   
};

void Score::show()
{
   cout << "��ѧ�ɼ���" << math << endl;
   cout << "Ӣ��ɼ���" << eng << endl;
}

class Student
{  
  public:
    Student(int id, int x, int y) : mark(x,y) // ���캯�� 
		{ stuid = id; }   
    void stushow();
  private:
      Score mark;     // �����Ա 
      int stuid;      // ѧ�� 
};

void Student::stushow()
{
     cout << "ѧ�ţ�"<< stuid << endl;
     mark.show();
}

int main()
{
  Student stu(2017007, 98, 85);  
  stu.stushow(); 
  
  return 0;
}
