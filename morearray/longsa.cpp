#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ans = 2; // Minimum length of arithmetic subarray
    int pd = a[1] - a[0]; // Previous common difference
    int curr = 2; // Current length of arithmetic subarray
    int j = 2; // Start from the third element
    
    // Find the longest arithmetic subarray
    while (j < n) {
        if (pd == a[j] - a[j - 1]) {
            curr++;
        } else {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    
    cout << ans << endl;
    return 0;
}