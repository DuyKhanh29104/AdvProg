#include<iostream>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;   //  giá trị của toán hạng của toán tử delete phải là giá trị con trỏ thu được từ một biểu thức new array trước đó.
                // Nếu không, hành vi của chương trình là không xác định.
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
