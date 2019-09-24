// Template 
#include<iostream> 

using namespace std; 

template<typename T>
class Point 
{
public:	 
	Point(T a, T b);  
	T Getx(); 
	T Gety();
private: 
	T x, y;
};

template<typename T>
Point<T>::Point(T a, T b)
{ x=a; y=b; }

template<typename T>
T Point<T>::Getx()
{  return x;  }

template<typename T>
T Point<T>::Gety()
{  return y;  }

int main()
{
	Point<int> A(4,5);	
	cout << "A.x=" << A.Getx() << endl;

	Point<float> B(4.2,5.3);	
	cout << "B.x=" << B.Getx() << endl;

    return 0; 
}
