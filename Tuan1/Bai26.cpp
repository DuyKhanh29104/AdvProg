#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max, min;
    cin >> max;
    min=max;
    int m, tong=max;
    for(int i=1;i<n;i++){
        cin >> m;
        tong+=m;
        if(m>max) max=m;
        if(m<min) min=m;

    }
    cout << "Mean: " << tong/n*1.0 << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min;
    return 0;
}
