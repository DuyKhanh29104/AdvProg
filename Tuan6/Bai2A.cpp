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
    cout << &a << endl;
}

void print2(Point &a)
{
    cout << &a << endl;
}

int main()
{
    Point a(1,2);
    cout << &a << endl; //0x61fe18
    print(a);           //0x61fdf0
    print2(a);          //0x61fe18

}
