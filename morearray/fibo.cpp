#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1]; // Array to store Fibonacci numbers
    arr[0] = 0; // First Fibonacci number
    arr[1] = 1; // Second Fibonacci number

    // Generate Fibonacci series
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Output the nth Fibonacci number
    cout << "Fibonacci number at position " << n << " is: " << arr[n] << endl;
    return 0;
}