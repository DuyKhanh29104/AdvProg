#include<iostream>
#include<cstring>
using namespace std;

struct String
{
    char* arr;
    int length;
    String(const char* _s)
    {
        length = strlen(_s);
        arr = new char[length];
        strncpy(arr, _s, length);
    }
    ~String()
    {
        delete []arr;
    }
    void print()
    {
        for( int i = 0; i < length; i++)
        cout << arr[i];
    }

    void append( const char* b)
    {
        length = length + strlen(b);
        char * arr2 = new char[length];
        strncpy(arr2, arr, length - strlen(b));
        strncpy(arr2 + length - strlen(b), b, strlen(b));
        delete []arr;
        arr = arr2;
    }

};

int main()
{
    String s("mangkitu");
    cout << s.length << endl;
    s.append(" mangmoi");
    cout << s.length << endl;
    s.print();
}
