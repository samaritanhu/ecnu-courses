// 将成员函数声明为常函数 
#include <iostream>
#include <cmath>

using namespace std;

class Rectangle2D
{
  public:
  	Rectangle2D() 
	  { x=0.0; y=0.0; width=1.0; height=1.0; }
	Rectangle2D(double x, double y, double width, double height);
    double getArea()
	  { return width*height; } 
	bool contains(double x, double y) const;      // *****
	bool contains(const Rectangle2D &r) const;	  // ***** 
	bool overlaps(const Rectangle2D &r) const;	  // *****
	
  private:
  	double x, y;  // 矩形中心 
	double width, height;  // 宽和高 
};

Rectangle2D::Rectangle2D(double x, double y, double width, double height)
{
	this->x = x; 
	this->y = y; 
	this->width = width;
	this->height = height;
}

bool Rectangle2D::contains(double x, double y) const // *****
{
	return (abs(this->x-x)<=width/2 && abs(this->y-y)<=height/2);
}

bool Rectangle2D::contains(const Rectangle2D &r) const // *****
{
	bool flag;
	flag = this->contains(r.x-r.width/2, r.y-r.height/2);
	flag = flag && this->contains(r.x-r.width/2, r.y+r.height/2);
	flag = flag && this->contains(r.x+r.width/2, r.y-r.height/2);
	flag = flag && this->contains(r.x+r.width/2, r.y+r.height/2);
	
	return flag;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const // *****
{
	// if ( this->contains(r) || r.contains(*this) )
	//  	return false;
	return (abs(x-r.x)<=(width+r.width)/2 && abs(y-r.y)<=(height+r.height)/2);
}

int main()
{
  	Rectangle2D r1(2, 2, 5.4, 4.8);
	Rectangle2D r2(4,5,10.6,3.3); 
	Rectangle2D r3(3,5,2.2,5.5);
  	
  	cout << "r1面积: " << r1.getArea() << endl;
  	cout << "r1.contains(3,3): " << r1.contains(3,3) << endl;
  	cout << "r1.contains(r2): " << r1.contains(r2) << endl; 
  	cout << "r1.overlaps(r3): " << r1.overlaps(r3) << endl;

    return 0;
}
