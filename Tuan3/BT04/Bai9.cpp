#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool a[n][n];
    int m=n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) a[i][j]=false;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        if(a[x][y]||x>=n||y>=n){
                cout << "Nhap khong hop le." << endl;
                m++;
            }
        if(a[x][y]==false) a[x][y]=true;

    }
    for(int i=0;i<n;i++)
    {
        int dem1=0;
        int dem2=0;
        for(int k=0;k<n;k++)
        {
            if(a[i][k]) dem1++;
            if(dem1>1){
                    cout << "Yes";
                    return 0;
            }
        }
        for(int k=0;k<n;k++)
        {
            if(a[k][i]) dem2++;
            if(dem2>1){
                    cout << "Yes";
                    return 0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int dem1=0, dem2=0, dem3=0, dem4=0;
        for(int k=0;k<n-i;k++)
        {
            if(a[k][i+k]) dem1++;
            if(a[k+i][k]) dem2++;
            if(dem1>1||dem2>1){
                cout << "Yes";
                return 0;
            }
        }
        for(int k=0;k<=i;k++)
        {
            if(a[k][i-k]) dem3++;
            if(a[n-1-k][i+k]) dem4++;

            if(dem3>1||dem4>1){
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";

    return 0;
}
