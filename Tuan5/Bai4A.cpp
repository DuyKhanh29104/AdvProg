#include<iostream>
using namespace std;


int binarySearch(int* a, int key, int left, int right)
{
    if (right < left) {
        return 0;
    }


    int mid = (left + right) / 2;

    if (key == a[mid])
    return mid + 1;

    if (key > a[mid]) {
        return binarySearch(a, key, mid + 1, right);
    }
    else {
        return binarySearch(a, key, left,mid - 1);
    }
}

int main() {
    int arr[] = {15, 20, 25, 30, 31, 44, 66};
    int n = sizeof(arr) / sizeof(int);
    int x = 30;
    int result = binarySearch(arr, x, 0, n-1);

    cout << result;
}

