#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
        if(max<a[i]) max=a[i];
    }
    bool b[max]={false};
    for(int i=0; i<n;i++){
        if(b[a[i]])
        {
            cout << "Yes";
            return 0;
        }
        b[a[i]]=true;

    }
    cout <<"No";

    return 0;
}
