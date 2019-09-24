// 类的组合 
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
   cout << "数学成绩：" << math << endl;
   cout << "英语成绩：" << eng << endl;
}

class Student
{  
  public:
    Student(int id, int x, int y) : mark(x,y) // 构造函数 
		{ stuid = id; }   
    void stushow();
  private:
      Score mark;     // 对象成员 
      int stuid;      // 学号 
};

void Student::stushow()
{
     cout << "学号："<< stuid << endl;
     mark.show();
}

int main()
{
  Student stu(2017007, 98, 85);  
  stu.stushow(); 
  
  return 0;
}
