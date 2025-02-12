#include <iostream>
using namespace std;

int Binarysearch(int array[], int n, int key) {
    int s = 0; // Start index
    int e = n; // End index
    
    while (s <= e) {
        int mid = (s + e) / 2;
        
        if (array[mid] == key) {
            return mid; // Return index if key is found
        } else if (array[mid] > key) {
            e = mid - 1; // Search in the left half
        } else {
            s = mid + 1; // Search in the right half
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int n;
    cin >> n;
    int array[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    int key;
    cin >> key;
    
    // Perform binary search
    cout << Binarysearch(array, n, key) << endl;
    return 0;
}