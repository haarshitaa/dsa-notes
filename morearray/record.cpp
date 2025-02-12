#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    a[n] = -1; // Sentinel value to handle the last element
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Handle edge case when there's only one day
    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }
    
    int ans = 0; // Count of record-breaking days
    int mx = -1; // Maximum visitors so far
    
    // Check for record-breaking days
    for (int i = 0; i < n; i++) {
        if (a[i] > mx && a[i] > a[i + 1]) {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    
    cout << ans << endl;
    return 0;
}