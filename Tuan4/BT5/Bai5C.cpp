#include <iostream>

using namespace std;

int songuyento(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    for(int i=2;i<n;i++)
    {
        if(songuyento(i))
            cout << i << " ";
    }
    return 0;
}
