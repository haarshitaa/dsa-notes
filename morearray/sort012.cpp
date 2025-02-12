#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n) {
    int start = 0, mid = 0, end = n - 1;
    while (mid <= end) {
        if (arr[mid] == 0) {
            swap(arr[start++], arr[mid++]);
        } else if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 2) {
            swap(arr[mid], arr[end--]);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort012(arr, n);
    printArray(arr, n);
    return 0;
}