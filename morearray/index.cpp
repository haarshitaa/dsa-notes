#include <bits/stdc++.h>
using namespace std;

void subArraySum(int arr[], int n, int sum) {
    for (int i = 0; i < n; i++) {
        int currentSum = arr[i];
        if (currentSum == sum) {
            cout << "Subarray found at index " << i << endl;
            return;
        } else {
            for (int j = i + 1; j < n; j++) {
                currentSum += arr[j];
                if (currentSum == sum) {
                    cout << "Subarray found between indexes " << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    subArraySum(arr, n, sum);
    return 0;
}