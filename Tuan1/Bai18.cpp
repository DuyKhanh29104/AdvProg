#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cout << "Nhap toa do diem A: ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B: ";
    cin >> x2 >> y2;
    float A=x1-x2;
    float B=y1-y2;
    float C=sqrt(A*A+B*B);
    cout << "Khong cach 2 diem A B la: " << C;

    return 0;
}
