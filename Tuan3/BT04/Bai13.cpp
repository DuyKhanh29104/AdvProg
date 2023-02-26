#include <iostream>

using namespace std;

bool check(int m, int a[])
{
    int tong=0;
    for(int i=0;i<m;i++){
        tong+=a[i];
    }
    for(int i=0;i<m;i++){
        float tong2=0;
        for(int j=0;j<i;j++) tong2+=a[j];
        if(tong2==(tong-a[i])*1.0/2) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int m;
    int a[100];
    do{
        cin >> m;
        for(int i=0;i<m;i++)
            cin >> a[i];
        if(check(m,a)) cout << "Yes" << endl;
        else cout << "No" << endl;
        n--;
    }while(n>0);

    return 0;
}
