#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int max = m, min = m;
    for(int i=1; i<n;i++){
    cin >> m;
    if(max < m) max = m;
    if(min > m) min = m;
    }
    cout << "Max: " << max
         << endl << "Min: " << min;

    return 0;
}
