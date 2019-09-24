// 用 string 对象实现 Employee 类 

#include <iostream>
#include <string> // 不是 cstring 

using namespace std;

class Employee
{
  public:
  	Employee(const string &, const string &, const string &, const string &);
  	void ChangeName(string &);
  	void Display();
  protected:
	string name, addr, city, zip;
};

// 构造函数 
Employee::Employee(const string & name, const string & addr, 
                   const string & city, const string & zip)
{
	this->name = name; 
	this->addr = addr; 
	this->city = city; 
	this->zip = zip; 
}

void Employee::ChangeName(string & name)
{
  	this->name = name;
}

void Employee::Display()
{
	cout << "Name: " << name << endl;
	cout << "Address: " << addr << " " 
		 << city << " " 
		 << zip << endl;
}

int main()
{
	string name="Zhang San";
	// string addr="500 Dongchuan Rd.";
	// string city="Shanghai";
	// string zip="200241";
	Employee x("Zhang San", "500 Dongchuan Rd.", "Shanghai", "200241");
	x.Display();	
	
	cout << endl;
    name="Li Si"; 
	x.ChangeName(name);
	x.Display();	

	return 0;
}
