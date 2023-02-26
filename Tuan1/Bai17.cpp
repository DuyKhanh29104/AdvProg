#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%400==0||(n%4==0&&n%100!=0))
        cout << "nam " << n << " la nam nhuan";
    else
        cout << "nam " << n << " khong phai nam nhuan";

    return 0;
}
