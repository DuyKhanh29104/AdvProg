#include <iostream>

using namespace std;

int main()
{
    for(;;)
    {
        int n;
        cin >> n;
        if(n==-1){
            cout << "Bye";
            break;
        }
        (n<0||n%5!=0)?cout << "-1" : cout << n/5;
        cout << endl;
    }
    return 0;
}
