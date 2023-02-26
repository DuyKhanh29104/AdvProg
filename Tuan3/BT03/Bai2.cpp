#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int n=a.length();
    int i=0,j=n-1;
    for(;;){
        if(a[i]==a[j]){
        i++;
        j--;
        }else{
        cout << "Khong phai chuoi doi xung";
        return 0;
        }
        if(i==j||j<i) break;

    }
    cout << "Chuoi doi xung";
    return 0;
}
