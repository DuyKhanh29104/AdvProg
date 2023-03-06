#include<iostream>

using namespace std;

string coso2(int a)
{
    string c="";
    while(a>0)
    {
        c=char(a%2+48)+c;
        a/=2;
    }
    return c;
}

int coso10(string a)
{
    int n=a.length();
    int b=1,c=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]=='1') c+=b;
        b*=2;
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    cout << coso2(n)<<endl;
    string k;
    k=coso2(n);
    cout << coso10(k);
}
