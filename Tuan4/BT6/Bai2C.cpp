#include <iostream>
using namespace std;

void hoanvi(char a[], char b[], bool used[], int N, int K, int count) {
    if (count == K) {
        for (int i = 0; i < K; i++) {
            cout << b[i];
        }
        cout << endl;
    } else {
        for (int i = 0; i < N; i++) {
            if (!used[i]) // nếu chưa dùng đến chữ này.
            {
                b[count] = a[i];
                used[i] = true; // đã dùng
                hoanvi(a, b, used, N, K, count + 1);
                used[i] = false;
            }
        }
    }
}

int main() {
    int N, K;
    cout << "Nhap N: ";
    cin >> N;
    cout << "Nhap K: ";
    cin >> K;

    char a[N];
    for (int i = 0; i < N; i++) {
        a[i] = 'a' + i;
    }

    char b[K];
    bool used[N] = {false};

    hoanvi(a, b, used, N, K, 0);

    return 0;
}
