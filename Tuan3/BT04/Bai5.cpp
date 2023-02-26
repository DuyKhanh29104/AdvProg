#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int m=1;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==0){
            cout << i+1 << " " << j+1;
            return 0;
        }
    }
    cout << "Khong co cap so ong bang 0";
    return 0;
}
