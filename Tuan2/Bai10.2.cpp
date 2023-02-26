#include <iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

void cach(int a)
{
    for(int i=0;i<13-a%10;i++) cout << " ";
}

int main()
{
    float C,AV;

    cout << "Fahrenheit   	Celsius  	Absolute Value" << endl;
    for(int i=0;i<=300;i+=20)
    {
        C=(i*1.0-32)*5/9;
        AV=C+275.15;
    cout.width(17);
    cout.setf(ios::left);
    cout << i;
    cout.width(17);
    cout << setprecision(2) << fixed << C;
    cout << setprecision(2) << fixed << AV << endl;
    }
    return 0;
}
