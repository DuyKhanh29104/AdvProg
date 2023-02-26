#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int dong = m, cot = n, p=0, k=1;
    while(k <= m*n)
    {
        for(int i=p;i<cot;i++) a[p][i]=k++;
        for(int i=p+1;i<dong;i++) a[i][cot-1]=k++;
        if(dong!=p+1)
            for(int i=cot-2;i>=p;i--) a[dong-1][i]=k++;
        if(cot!=p+1)for(int i=dong-2;i>p;i--) a[i][p]=k++;
        dong--;
        cot--;
        p++;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout.width(2);
        cout << a[i][j] << " ";
    }
    cout << endl;
    }

}
