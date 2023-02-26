#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tong=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        tong+=a[i];
    }
    float tb=1.0*tong/n;
    float ps=0;
    for(int i=0;i<n;i++){
        ps+=(a[i]-tb)*(a[i]-tb);

    }
    ps=1.0*ps/n;
    cout << "Gia tri trung binh: " << tb << endl <<"Phuong sai: "<< ps;

    return 0;
}
