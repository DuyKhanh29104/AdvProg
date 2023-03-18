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
    cout << &a << endl;     //0x61fdf0
    cout << &a.x << endl;   //0x61fdf0
    cout << &a.y << endl;   //0x61fdf0
}

int main()
{
    Point a(1,2);
    print(a);

}

// vị trí của trường đầu tiên trung với vị trí của biến
// Vị trí của trường thứ 2 cách 4 bit ( là dộ dài của biến kiểu int)
