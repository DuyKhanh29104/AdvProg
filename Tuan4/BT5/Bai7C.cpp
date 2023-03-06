#include <iostream>

using namespace std;

void in(int m,int n)
{
    for(int i=0;i<m;i++)
        cout << " ";
    for(int i=-n+1;i<n;i++)
        cout << "*";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a=n-1;
    int b=1;
    for(int i=0;i<n;i++)
        in(a-i,b+i);

    return 0;
}
