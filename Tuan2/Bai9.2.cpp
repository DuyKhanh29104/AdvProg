#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tong=0;
    while(n>0)
    {
        tong+=n%10;
        n/=10;
    }
    cout << "Tong cac chu so: " << tong;
    return 0;
}
