#include <iostream>
using namespace std;

int linearSearch(int array[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            return i; // Return index if key is found
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
    
    // Perform linear search
    cout << linearSearch(array, n, key) << endl;
    return 0;
}