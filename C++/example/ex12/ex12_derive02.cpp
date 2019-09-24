// 派生类构造函数 
#include <iostream>
#include <string>

using namespace std;

class Person	// 父类 
{
  public:
	Person(string & str, int age ) // : name(str)
	{ name=str; this->age = age; }
	void show() 
	{ cout << "Name: " << name << endl;
	  cout << "Age: " << age << endl;
	}
  private:
  	string name;  // 姓名 
  	int age;	  // 年龄		
};

class Student : public Person	// 派生类 
{
  public:
	Student(string & str, int age, int stuid) : Person(str, age)
	{ this->stuid = stuid; }
	void show()
	{ Person::show();  // 不能直接访问 name 和 age 
	  cout << "Stuid: " << stuid << endl;
	}	
  private:
  	int stuid;  // 学号 
};

int main()
{
	string str="Xi Jiajia";
	Student stu1(str, 18, 20150108);
	
	stu1.show();	

	return 0;
}
