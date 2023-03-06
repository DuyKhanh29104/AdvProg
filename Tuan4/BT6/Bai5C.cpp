#include <iostream>

using namespace std;

void tachso(int n, int arr[], int len) {
    if(n<0) return;
    if (n == 0) {
        for (int i = 0; i < len; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    int k = n;
    if (len > 0) {
        k = arr[len-1]; // chỉ duyệt các số nhỏ hơn số đứng trước
    }
    for (int i = k; i >= 1; i--) {
        arr[len] = i;
        tachso(n-i, arr, len+1);
    }
}


int main() {
    int n;
    cout << "Phan tich thanh tong so: ";
    cin >> n;
    int arr[n];
    tachso(n, arr, 0);
    return 0;
}
