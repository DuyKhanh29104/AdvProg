#include<iostream>

using namespace std;

struct Point
{
    int x;
    int y;
    Point (int _x, int _y)
    {
        x=_x;
        y=_y;
    }
};

void print(Point a)
{
    cout << "(" << a.x << ", " << a.y << ")";
}

int main()
{
    Point a(1,2);
    print(a);

}
