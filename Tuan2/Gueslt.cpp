#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int chonso()
{
    srand(time(0));
    return rand()%100+1;
}

void traloi(int a,int socantim){
    if(a<socantim) cout << "Your number is too small.";
    else if(a>socantim) cout << "Your number is too big.";
    else cout << "Congratulation! You win.";
    cout << endl;
}
int main()
{
    int socantim=chonso();
    int diem=100;
    for(;;)
    {
        int a;
        cout << "Nhap so ban chon: ";
        cin >> a;
        traloi(a,socantim)  ;
        if(a==socantim) break;
        diem--;
    }
    cout << "Diem cua ban la: " << diem;
    return 0;
}
