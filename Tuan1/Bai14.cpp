#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main()
{
    srand(time(0));
    int a,b;
    a=rand()%100+1;
    b=rand()%100+1;
    int chonso=a;
    if(chonso<=50) chonso=b;
    if(chonso>a+b-chonso) cout << "You Win";
    else cout <<"You lose";
    return 0;
}
