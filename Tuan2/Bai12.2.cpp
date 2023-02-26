#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int m;
    cin >> m;
    int n=sqrt(m);
    if(n*n == m) cout << "m la so chinh phuong.";
    else cout << "m khong phai so chinh phuong.";
    return 0;
}
