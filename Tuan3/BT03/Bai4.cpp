#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    char a[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++) cin >> a[i][j];
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(a[i][j]=='*') continue;
            if(a[i][j]=='.')
            {
                int dem=0;
                for(int m=i-1;m<i+2;m++)
                {
                    if(m<0||m>=x) continue;
                    for(int n=j-1;n<j+2;n++){
                            if(n<0||n>=y) continue;
                        if(a[m][n]=='*') dem++;
                    }
                }
                a[i][j]=dem + 48;
            }
        }
    }
    cout << "Do min :" << endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
