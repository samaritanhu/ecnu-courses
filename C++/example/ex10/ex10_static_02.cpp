// ��̬������Ա 
#include <iostream>

using namespace std;

class Student  
{
  public:
    Student(int num=0, float s=0)
	  { id=num; score=s; } 
	void total();  // ��ͨ��Ա���� 
    static float average();  // ��̬��Ա����
    
  private:
    int id;
    float score;
    static float sum;   // ��̬���ݳ�Ա
    static int count;   // ��̬���ݳ�Ա
};

void Student::total()   // ��ͨ��Ա����
{
   sum+=score;  // �����ܷ֣�������ͨ���ݳ�Ա 
   count++;     // ��ͳ�Ƶ����������ʾ�̬���ݳ�Ա 
}

float Student::average()  // ��̬����
{
   return(sum/count);
}

float Student::sum=0;  // �Ծ�̬���ݳ�Ա��ʼ��
int Student::count=0;  // �Ծ�̬���ݳ�Ա��ʼ��

int main()
{
   Student stu[4]={Student(1001,70), 
                   Student(1002,78),
				   Student(1005,98),
				   Student()};	
   int n;
   cout << "������Ҫͳ�Ƶ�����: ";
   cin >> n;  // ͳ��ǰ n ��ѧ����ƽ���ɼ�
   
   for(int i=0;i<n;i++)  
      stu[i].total();
      
   cout << "ǰ "<< n <<" ��ѧ����ƽ���ɼ��ǣ�" 
        << Student::average() << endl;  // ���þ�̬��Ա����
        
   return 0;
}
