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
    for(int i=1;i<=n;i++) cout << a[i]<< " ";
    cout << endl;
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
    int n=5;
    Try(1,n);
    return 0;
}
