#include <iostream>

using namespace std;

int main()
{
    float tong = 0;
    for(int i=0; i<5; i++)
    {
        float c;
        cout << "Nhap diem mon hoc " << i+1 << ": ";
        cin >> c;
        tong += c;
    }
    cout << "Diem trung binh la: " << tong/5;
    return 0;
}
