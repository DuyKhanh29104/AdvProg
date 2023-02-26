#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int x=a-b;
    int y=b-c;
    bool k;
    if(x*y>0) k=true;
    else k=false;
    cout << k;
    return 0;
}
