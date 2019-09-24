// 静态函数成员 
#include <iostream>

using namespace std;

class Student  
{
  public:
    Student(int num=0, float s=0)
	  { id=num; score=s; } 
	void total();  // 普通成员函数 
    static float average();  // 静态成员函数
    
  private:
    int id;
    float score;
    static float sum;   // 静态数据成员
    static int count;   // 静态数据成员
};

void Student::total()   // 普通成员函数
{
   sum+=score;  // 计算总分，访问普通数据成员 
   count++;     // 已统计的人数，访问静态数据成员 
}

float Student::average()  // 静态函数
{
   return(sum/count);
}

float Student::sum=0;  // 对静态数据成员初始化
int Student::count=0;  // 对静态数据成员初始化

int main()
{
   Student stu[4]={Student(1001,70), 
                   Student(1002,78),
				   Student(1005,98),
				   Student()};	
   int n;
   cout << "输入需要统计的人数: ";
   cin >> n;  // 统计前 n 名学生的平均成绩
   
   for(int i=0;i<n;i++)  
      stu[i].total();
      
   cout << "前 "<< n <<" 个学生的平均成绩是：" 
        << Student::average() << endl;  // 调用静态成员函数
        
   return 0;
}
