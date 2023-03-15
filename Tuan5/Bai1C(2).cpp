#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int xucsac()
{
    return rand()%6+1;
}

int main()
{
    srand(time(NULL));
    int nguoi1=0, nguoi2=0;
    int n;
    n=xucsac();
    nguoi1+=n;
    cout << "Xuc xac nguoi choi 1: " << n;
    cout.width(20);
    cout << "Tong nguoi 1: " << nguoi1 << endl;
    while(nguoi1<100 && nguoi2<100)
    {
        if(nguoi1<nguoi2)
        {
            n=xucsac();
            nguoi1+=n;
            cout << "Xuc xac nguoi choi 1: " << n;
            cout.width(20);
            cout << "Tong nguoi 1: " << nguoi1 << endl;
            if(nguoi1>=100) break;
        }else{

            n=xucsac();
            nguoi2+=n;
            cout << "Xuc xac nguoi choi 2: " << n;
            cout.width(20);
            cout << "Tong nguoi 2: " << nguoi2 << endl;
            if(nguoi2>=100) break;
        }
    }
    if(nguoi1>=100) cout << "Nguoi choi 1 thang!";
    else cout << "Nguoi choi 2 thang!";
}

