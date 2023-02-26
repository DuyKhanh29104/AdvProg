#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b>> c;

    if(a+b==c||b+c==a||a+c==b||a<0||b<0||c<0){
        cout << "Invalid";
        return 0;
    }
    cout << "chu vi cua tam giac: " <<a+b+c << endl
         << "tam giac nay la tam giac ";
    if(a==b&&b==c){
        cout << "deu";
        return 0;
    }
    if(a==b||b==c||c==a){
        cout << "can";
        return 0;
    }
    int d;
    if(a>b) d=a;
    else d=b;
    if(d<c) d=c;
    if(d*d==a*a+b*b+c*c-d*d){
        cout << "vuong";
        return 0;
    }
    cout << "thuong";

}
