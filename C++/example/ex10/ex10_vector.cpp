// vector �� 
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> x(10,1);  // ����Ϊ 10�� ����Ԫ�ض��� 1 

    cout << "size of x: " << x.size() << endl; 
    cout << "first member: " << x[0] << endl;
    cout << "last member: " << x.back() << endl;
    
    x.push_back(5);
    cout << "\n=== add a member from the back ===\n";
    cout << "size of x: " << x.size() << endl; 
    cout << "last member: " << x.back() << endl;
    
	return 0;
}
