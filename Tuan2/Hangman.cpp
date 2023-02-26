#include <iostream>

using namespace std;
string chontu()
    {
        return "NGUYENDUYKHANH";
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
    char kitu;
    int lanchon=7;
    string tuduocchon=chontu();
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
