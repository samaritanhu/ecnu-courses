// �����๹�캯�� 
#include <iostream>
#include <string>

using namespace std;

class Person	// ���� 
{
  public:
	Person(string & str, int age ) // : name(str)
	{ name=str; this->age = age; }
	void show() 
	{ cout << "Name: " << name << endl;
	  cout << "Age: " << age << endl;
	}
  private:
  	string name;  // ���� 
  	int age;	  // ����		
};

class Student : public Person	// ������ 
{
  public:
	Student(string & str, int age, int stuid) : Person(str, age)
	{ this->stuid = stuid; }
	void show()
	{ Person::show();  // ����ֱ�ӷ��� name �� age 
	  cout << "Stuid: " << stuid << endl;
	}	
  private:
  	int stuid;  // ѧ�� 
};

int main()
{
	string str="Xi Jiajia";
	Student stu1(str, 18, 20150108);
	
	stu1.show();	

	return 0;
}
