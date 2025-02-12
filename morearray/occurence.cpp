#include <bits/stdc++.h>
using namespace std;

int Occurrence(int arr[], int key, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << "Occurrence of " << key << " is: " << Occurrence(arr, key, n);
    return 0;
}