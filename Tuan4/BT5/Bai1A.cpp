#include<iostream>

using namespace std;

int main()
{
    int a[5];
    char b[5];
    for(int i=0;i<3;i++)
        cout << &a[i] << endl; // các giá trị chênh nhau 4 đơn vị.
    for(int i=0;i<3;i++)
        cout << (void*)&b[i] << endl; //các giá trị chênh nhau 1 kí tự (....a,....b,....)
}
