#include <iostream>

using namespace std;

int main()
{
    cout << "Nhap so mon hoc: ";
    int n;
    cin >> n;
    cout << "Tong so mon hoc can tinh DTB: " << n << endl;
    int diemtong=0,hs=0;
    for(int i=1;i<=n;i++){
        cout << endl <<"Diem mon hoc " << i <<": ";
        int diem ;
        cin >> diem;
        int heso;
        cout << "He so mon hoc " << i << ": ";
        cin >> heso;
        hs+=heso;
        diemtong+=diem*heso;
        cout << endl;
    }
    cout << "So mon hoc: " << n << endl
         << "Tong he so: " << hs << endl
         << "Diem trung binh cua " << n << " mon hoc: " << diemtong/hs*1.0;
    return 0;
}
