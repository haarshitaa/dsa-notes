#include<bits/stdc++.h>
using namespace std;

int minNum(int arr[], int n) {
    int mini = 100000;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Find and print minimum number
    cout << minNum(arr, n);
    return 0;
}