// 类的派生
#include <iostream>
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

class Point3D : public Point // 派生类 
{
  public:
	Point3D() {z = 0.0; }  // 调用 Point 类的缺省构造函数 
	Point3D(double x, double y, double z) : Point(x,y) 
	{ this->z=z; }
	double getz() { return z; }
    double dist(const Point3D & p); 
    
  private:
      double z;
};

double Point3D::dist(const Point3D & p)
{	
	return sqrt(pow(Point::dist(p),2)+pow(z - p.z,2));
}	   
 
int main() 
{
    Point3D A, B(4,5.6,7.8);
	 
    cout << "|A-B|=" << A.dist(B) << endl;   

    return 0; 
}
