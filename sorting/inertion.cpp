#include<bits/stdc++.h>
using namespace std;

int insertion(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    
    // Output sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Call insertion sort function
    cout << insertion(n, arr);
    return 0;
}