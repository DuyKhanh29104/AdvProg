#include<iostream>

using namespace std;

struct Point
{
    int *a=new int [2];
    Point (float _x, float _y)
    {
    a[0]=_x;
    a[1]=_y;
    }
};

int main()
{
    Point m(1,2);
    Point n=m;
    cout << &m.a[0] << "  " << &m.a[1] << endl; //0x6b1780  0x6b1784
    cout << &n.a[0] << "  " << &n.a[1] << endl; //0x6b1780  0x6b1784

}
// các trường giá trị của m  và n cùng trỏ vào một địa chỉ
