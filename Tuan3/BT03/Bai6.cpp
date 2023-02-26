#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
           a[i][j]=0;

    }
    int x=0,y=n/2;
    for(int i=0;i<n*n;i++)
    {
        a[x][y]=i+1;
        if(x==0)
            x=n;
        x--;
        y=(y+1)%n;
        if(a[x][y]!=0)
        {
            x=(x+2)%n;
            if(y==0) y=n;
            y=(y-1)%n;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout.width(2);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
