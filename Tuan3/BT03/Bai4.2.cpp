#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n]={0};
    a[0]=1;
    cout << a[0]<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=1;j--) a[j]=a[j]+a[j-1];
        for(int j=0;j<=i;j++) cout << a[j] << " ";
        cout << endl;
    }

    return 0;
}
