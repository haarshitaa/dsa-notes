#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    // Bubble Sort Logic
    int counter = 1;
    while (counter < n) {
        for (int i = 0; i < n - counter; i++) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
            }
        }
        counter++;
    }
    
    // Output sorted array
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}