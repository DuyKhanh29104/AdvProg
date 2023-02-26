#include <iostream>

using namespace std;
bool kiemtra(int a)
{
    int m[100];
    int i=0;
    while(a>0){
        m[i++]=a%10;
        a/=10;
    }
    int x=0,y=i-1;
    for(;;){
        if(m[x]!=m[y]) return false;
        x++;
        y--;
        if(x>y) break;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        int dem=0;
        for(int i=a;i<=b;i++)
        {
            if(kiemtra(i)) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}
