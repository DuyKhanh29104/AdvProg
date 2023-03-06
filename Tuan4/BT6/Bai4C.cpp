#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 16;

void hadamard(int n, int H[MAX][MAX]) {
    if (n == 0) {
        H[0][0] = 1;
    } else if (n == 1) {
        H[0][0] = H[1][1] = 1;
        H[0][1] = H[1][0] = 1;
        H[0][0] = 1; H[1][1] = -1;
    } else {
        hadamard(n - 1, H);
        int N = pow(2, n);
        for (int i = 0; i < N / 2; i++) {
            for (int j = 0; j < N / 2; j++) {
                H[i][j + N / 2] = H[i][j];
                H[i + N / 2][j] = H[i][j];
                H[i + N / 2][j + N / 2] = -H[i][j];
            }
        }
    }
}

void inmang(int H[MAX][MAX], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (H[i][j] == 1) {
                cout << ". ";
            } else {
                cout << "o ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    int N = pow(2, n);
    int H[MAX][MAX] = {};
    hadamard(n, H);
    inmang(H, N);
    return 0;
}
