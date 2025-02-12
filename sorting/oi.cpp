#include<bits/stdc++.h>
using namespace std;

void insertion_Sort(int n, int arr[]) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
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
    insertion_Sort(n, arr);
    
    // Output sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}