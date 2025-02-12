#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n, int m) {
    vector<int> map(m + 1, 0);
    for (int i = 0; i < n; i++) {
        map[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (map[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int m = -1000;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m = max(m, arr[i]);
    }
    cout << "First non-repeating element is: " << firstNonRepeating(arr, n, m);
    return 0;
}