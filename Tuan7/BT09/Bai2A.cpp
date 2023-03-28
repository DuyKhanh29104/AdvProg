#include<iostream>
using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p; // p va p2 cung tro vao 1 vi tri
    *p = 10;
    delete p;  // xoa con tro p nhung van con p2 tro den
    *p2 = 100; // thay doi o nho khong con duoc cap phat
    cout << *p2;
    delete p2;

}
