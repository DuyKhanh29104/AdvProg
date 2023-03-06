#include<iostream>
using namespace std;

int a[20];
bool check(int x, int y)
{
    for(int i=1;i<x;i++)
    {
        if(a[i]==y||abs(x-i)==abs(a[i]-y)) return false;
    }
    return true;
}

void xuat(int n)
{
    char in[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) in[i][j]='.';
    for(int i=1;i<=n;i++){
        cout << a[i]<< " ";
        in[i-1][a[i]-1]='*';
    }
    cout << endl;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                cout.width(2);
                cout << in[i][j];
            }
    cout << endl;
    }



}

void Try(int i, int n)
{
    for(int j=1;j<=n;j++)
    {
        if(check(i,j)){
            a[i]=j;
            if(i==n) xuat(n);
            Try(i+1,n);
        }

    }
}

int main()
{
    int n;
    cin >>n;
    Try(1,n);
    return 0;
}
