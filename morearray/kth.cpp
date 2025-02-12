#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int k;
    cin >> k;
    sort(array, array + n);
    cout << "K-th smallest element is: " << array[k - 1] << endl;
    return 0;
}