#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void chay(int& viTri, int (*buoc)());

int cdrua()
{
    int n=rand()%100;
    if(n<50) return 3;
    else if(n<80) return 1;
    else return -6;
}

int cdtho()
{
    int n=rand()%100;
    if(n<20) return 0;
    else if(n<40) return 9;
    else if(n<50) return -12;
    else if(n<80) return 1;
    else return -2;
}

int main()
{
    srand(time(NULL));
    int rua=0, tho=0;
    int n;
    while(rua<70 && tho <70)
    {
        n=cdrua();
        rua+=n;
        if(rua<0) rua=0;
        cout << "Rua: ";
        cout << " Buoc: ";
        cout.width(4);
        cout.setf(ios::left);
        cout << n;
        cout << "   Vi tri: " << rua;
        cout << endl;

        n=cdtho();
        tho+=n;
        if(tho<0) tho=0;
        cout << "Tho: ";
        cout << " Buoc: ";
        cout.width(4);
        cout.setf(ios::left);
        cout << n;
        cout << "   Vi tri: " << tho;
        cout << endl << endl;
    }
    if(rua>tho) cout << "Rua Thang!";
    else if(rua<tho) cout << "Tho Thang!";
    else cout << "Hoa";

}
