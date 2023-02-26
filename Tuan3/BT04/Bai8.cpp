#include <iostream>

using namespace std;
void sapxep(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                int m=a[j];
                a[j]=a[j+1];
                a[j+1]=m;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sapxep(n,a);
    sapxep(n,b);
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
