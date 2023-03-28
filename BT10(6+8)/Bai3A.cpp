#include<iostream>

using namespace std;

struct Point
{
    double x;
    double y;
    Point (int _x, int _y)
    {
        x=_x;
        y=_y;
    }
    Point mid_point( const Point &a) const
    {
        Point b(0,0);
        b.x= (x+a.x)/2;
        b.y=(y+a.y)/2;
        return b;
    }
};


void print(Point a)
{
    cout << "(" << a.x << ", " << a.y << ")";
}


int main()
{
    Point a(1,2);
    Point b(2,3);
    print(a.mid_point(b));


}
