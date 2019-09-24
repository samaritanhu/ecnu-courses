// Point
#include<iostream>
#include <cmath>

using namespace std; 

class Point 
{
  public:	 
	Point() { x=0.0; y=0.0; }
	Point(double x, double y) 
     { this->x = x; this->y = y; }	
	int getx() {return x;}
	int gety() {return y;}
	double dist(const Point &);
	
  private: 
	double x, y;
};

double Point::dist(const Point &p)
{
	double xx = x - p.x;
	double yy = y - p.y;
	return sqrt(xx*xx + yy*yy);
}


int main()
{
	Point A, B(4,5.6);
	
    cout << "|A-B|=" << A.dist(B) << endl;	
	
    return 0; 
}

