#include <iostream>
using namespace std;

int main() {
    int mx = -199999999; // Initialize with a very small number
    int n;
    cin >> n;
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Output maximum number after each iteration
    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    return 0;
}