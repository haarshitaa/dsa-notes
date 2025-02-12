#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    
    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Output matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int row_start = 0, row_end = n - 1;
    int col_start = 0, col_end = m - 1;
    
    // Spiral order traversal
    while (row_start <= row_end && col_start <= col_end) {
        // Traverse from left to right
        for (int col = col_start; col <= col_end; col++) {
            cout << arr[row_start][col] << " ";
        }
        row_start++;
        
        // Traverse from top to bottom
        for (int row = row_start; row <= row_end; row++) {
            cout << arr[row][col_end] << " ";
        }
        col_end--;
        
        // Traverse from right to left
        for (int col = col_end; col >= col_start; col--) {
            cout << arr[row_end][col] << " ";
        }
        row_end--;
        
        // Traverse from bottom to top
        for (int row = row_end; row >= row_start; row--) {
            cout << arr[row][col_start] << " ";
        }
        col_start++;
    }
    return 0;
}