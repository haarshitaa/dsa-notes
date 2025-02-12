#include <bits/stdc++.h>
using namespace std;

int NG(int arr[], int n) {
    if (n == 1) return 0; // Only one element
    if (arr[0] >= arr[1]) return 0; // First element is peak
    if (arr[n - 1] >= arr[n - 2]) return n - 1; // Last element is peak

    // Check for peak in the middle
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }
    return -1; // No peak found
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Greatest element is at index: " << NG(arr, n);
    return 0;
}