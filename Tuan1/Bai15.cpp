#include <iostream>

using namespace std;

int main()
{
    string a,b;
    a="a";
    b="b";
    cout << a <<endl << b <<endl;
    for(int i=0;i<8;i++){
        string c;
        c=b+a;
        a=b;
        b=c;
        cout << c << endl;
    }
    return 0;
}
