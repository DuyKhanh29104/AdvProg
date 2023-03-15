#include<iostream>
using namespace std;
void size(int a[])
{
    cout << sizeof(a); // 8
}

int main()
{
    int a[]={1,2,3,4,5};
    cout << sizeof(a) << endl; //20
    size(a);

}
// mảng được truyền vào hàm dưới dạng con trỏ.
