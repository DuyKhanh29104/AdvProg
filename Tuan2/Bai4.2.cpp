#include <iostream>

using namespace std;
int UCLN(int a,int b)
{
    if(a==b) return a;
    if(a>b) return UCLN(a-b,b);
    else return UCLN(a,b-a);
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << a*b/UCLN(a,b);
    return 0;
}
