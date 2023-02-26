#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int n=a.length();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i] << a[j] << " ";
            for(int k=0;k<n;k++)
            cout << a[i] << a[j] << a[k] << " ";
        }

    }
    return 0;
}
