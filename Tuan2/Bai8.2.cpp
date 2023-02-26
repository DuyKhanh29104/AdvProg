#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    float denta=b*b-4*a*c;
    if(denta>0){
        cout << "phuong trinh co hai nghiem: "<< endl
             << setprecision(2) <<fixed << (-b-sqrt(denta))/(2*a) << endl << (-b+sqrt(denta))/(2*a);
    }else if(denta==0){
        cout << "phuong trinh co nghiem kep: " << endl
             <<setprecision(2) <<fixed << -b/(2*a);
    }else{
        float k=-denta;
        cout << "phuong trinh co ngiem phuc: "
             << setprecision(2) << fixed << -b/2 << " " << -sqrt(k)/2 << "i" << endl
             << -b/2 << " " << sqrt(k)/2 << "i";
    }
}
