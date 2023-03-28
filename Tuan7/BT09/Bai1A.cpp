#include<iostream>
#include<cstring>

using namespace std;

char* concat(const char* a, const char* b)
{
    int n= sizeof(a)+sizeof(b);
    char* c= new char[n];
    strcpy(c,a);
    strcat(c,b);
    return c;

}

int main()
{
    char a[]="Hello";
    char b[]="World";
    char* c= concat(a,b);
    cout << c << endl;
}
