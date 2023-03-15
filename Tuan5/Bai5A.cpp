#include<iostream>
using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main()
{
    cout << weird_string();
}
// Encoding change
// Chương trình không in ra gì vì mảng c là biến địa phương của hàm weird_string
// khi truy nhập mảng c khi hàm weird_string đã kết thúc, ta đang truy nhập vào vùng bộ nhớ stack đã bị thu hồi
