#include <iostream>

using namespace std;
int ucln(int a,int b)
{
    if(a==b) return a;
    if(a>b) return ucln(a-b,b);
    else return ucln(a,b-a);
}

int main()
{
    int a,b;
    char c;
    cin >> a >> c >> b;
    int d=ucln(a,b);
    cout << "phan so rut gon cua " << a << c << b << " la: "<<a /d << c << b/d;
    return 0;
    return 0;
}
