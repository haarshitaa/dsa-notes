#include<bits/stdc++.h>
using namespace std;

int maxNum(int arr[], int n) {
    int maxi = -100000;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Find and print maximum number
    cout << maxNum(arr, n);
    return 0;
}