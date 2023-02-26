#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Thu nhap cua ban la: ";
    cin >> n;
    n=n*91/100;
    int m=n;
    if(m>2000000) m=m-50000-75000-((m-2000000)/5);
    else if(m>1500000) m=m-50000-(m-1500000)*15/100;
    else if(m>1000000) m=m-(m-1000000)/10;
    cout << "Thu nhap sau khi tru thue la: " <<m;

    return 0;
}
