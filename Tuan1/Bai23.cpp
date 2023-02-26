#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    a= a+b+abs(a-b);
    cout << a/2;
    return 0;
}
