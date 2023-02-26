#include <iostream>
#include<cmath>

using namespace std;
bool sohoanhao(int a)
{
    int b=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0) b+=i;
    }
    if(b==a) return true;
    else return false;
}
bool songuyento(int a)
{
    if(a==2) return true;
    for(int i=2;i<=a/2;i++){
        if(a%i==0) return false;
    }
    return true;
}
bool sochinhphuong(float a)
{
    int b=sqrt(a);
    if(b*b==a) return true;
    else return false;

}

int main()
{
    float n;
    cout << "Nhap so: ";
    cin >> n;
    cout << "So hoan hao tu 2 den " << n << " la: ";
    for(int i=2;i<=n;i++){
        if(sohoanhao(i))
            cout << i <<  " ";
    }
    cout << endl;
    cout << "So nguyen to tu 2 den " << n << " la: ";
    for(int i=2;i<=n;i++){
        if(songuyento(i))
            cout << i <<  " ";
    }
    cout << endl;
    cout << "So chinh phuong tu 2 den " << n << " la: ";
    for(int i=2;i<=n;i++){
        if(sochinhphuong(i))
            cout << i <<  " ";
    }
    return 0;
}
