#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // Input dimensions of the matrix (rows x columns)
    int arr[n][m];

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the transpose of the matrix
    for (int i = 0; i < m; i++) { // Loop through columns first
        for (int j = 0; j < n; j++) { // Loop through rows
            cout << arr[j][i] << " "; // Swap rows and columns
        }
        cout << endl; // Newline after each row of the transpose
    }

    return 0;
}