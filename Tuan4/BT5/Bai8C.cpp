#include<iostream>
#include<cmath>

using namespace std;

int rnd(double a)
{
    int b=int (a);
    a=a-b;
    if(a<0.5) return b;
    else return b+1;
}


int main()
{
    cout << rnd(5.5);
    return 0;
}
