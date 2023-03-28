#include<iostream>

using namespace std;

int main()
{
    int n=10;

    int *p;
    p=&n;
    cout << n << endl; // in ra 10
    delete p;
    cout << n; //khong in ra gi
    // bien da phuong do con tro tro toi da bi giai phong do toan tu delete
}
