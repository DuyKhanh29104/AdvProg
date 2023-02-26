#include <iostream>

using namespace std;

int main()
{
    double a;
    int b;
    cin >> a >> b;
    double c=a;
    if(b==0)
    {
        cout << 1;
        return 0;
    }
    for(int i=1;i<b;i++){
        c*=a;
    }
    cout << c;
    return 0;
}
