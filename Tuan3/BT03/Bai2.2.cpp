#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n];
   cin >> a[0];
   int min=a[0], max=a[0];
   int tongchan=0, tongle=0;
   for(int i=1;i<n;i++){
    cin >> a[i];
    if(min>a[i]) min=a[i];
    if(max<a[i]) max=a[i];
    if(a[i]%2==0) tongchan+=a[i];
    else tongle+=a[i];
   }
   if(a[0]%2==0) tongchan+=a[0];
    else tongle+=a[0];
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Tong cac so chan: " << tongchan << endl;
    cout << "Tong cac so le: " << tongle ;
    return 0;
}
