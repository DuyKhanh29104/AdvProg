#include <iostream>

using namespace std;


int main()
{
    int n;
    cout << "Nhap so lan chon: ";
    cin >> n;
    int m[100][100]={};
    for(int i=0;i<n;i++)
    {
        cout << "Nhap 2 so cua ban: ";
        int a,b;
        cin >> a >> b;
        for(int j=0;j<a;j++){
            for(int k=0;k<b;k++){
                m[j][k]++;
            }
        }
    }
    int a=0;
    int dem=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
        if(m[i][j]> a) a=m[i][j];
        }
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
        if(m[i][j]== a) dem++;
        }
    }
    cout << "So lon nhat la: " << a << endl;
    cout <<  "So so bang " << a << " la " <<dem;
    return 0;
}
