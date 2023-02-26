#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    cout << "UCLN la: " << a;
    return 0;
}
