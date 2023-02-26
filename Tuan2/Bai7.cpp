#include <iostream>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int n=a.length();
    char m=a[0];
    cout << m << " ";
    for(int i=0;i<n;i++){
        if(a[i]==' ') continue;
        if(a[i]==m) continue;
        cout << a[i] << " ";
        m=a[i];
    }
    return 0;
}
