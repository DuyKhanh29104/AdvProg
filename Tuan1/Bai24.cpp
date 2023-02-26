#include <iostream>

using namespace std;

int main()
{
    int d,m,y;
    int day;
    cin >> d >> m >> y;
    if(m<1||m>12) cout << "ngay nhap khong hop le";
    switch(m)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        day=30;
        break;
    case 2:
        day=28+(y%400==0||(y%4==0&&y%100!=0));
        break;
    default:
        day=31;
    }
    if(d<1||d>day) cout << "ngay nhap khong hop le";
    y-=(14-m)/12;
    m=12;
    d=(d+y+y/4-y/100+y/400+(31*m)/12)%7;
    if(!d) cout << "chu nhat";
    else cout << "thu " << d+1;
    return 0;
}
