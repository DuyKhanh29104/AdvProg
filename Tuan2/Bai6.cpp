#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<n+1;i++){
        for(int j=i;j<i+n;j++){
            int m=j;
            while(m>n) m-=n;
            cout << m << " ";
        }
        cout << endl;
    }
    return 0;
}
