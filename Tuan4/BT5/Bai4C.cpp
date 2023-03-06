#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

string a[100];

string chontu(string a[],int n)
    {
        srand(time(NULL));
        int m=rand()%n;
        return a[m];
    }
string kiemtra(string a,string b,char c)
{
    for(int i=0;i<a.length();i++){
        if(a[i]==c)
            b[i]=c;
    }
    return b;

}
void renderGame(string a,int b)
{
    cout << a << endl;
    cout << "So lan chon con lai: " << b << endl;
    cout << "Nhap ki tu ban chon: ";
}
bool check(string a, char b)
{
    for(int i=0;i<a.length();i++){
        if(a[i]==b)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout <<"Nhap tu:";
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cout << "Bat dau!";
    char kitu;
    int lanchon=7;
    string tuduocchon=chontu(a,n);
    string hienthi=string(tuduocchon.length(),'-');
    for(;;)
    {
        renderGame(hienthi,lanchon);
        cin >> kitu;
        cout << endl;
        if(check(tuduocchon,kitu)){
            hienthi=kiemtra(tuduocchon,hienthi,kitu);
        }else{
        lanchon--;
        }

        if(hienthi==tuduocchon){
            cout << hienthi << endl << "You win.";
            break;
        }
        if(lanchon==0){
            cout << "You lost. Correct word is " << tuduocchon;
            break;
        }

    }
    return 0;
}
