#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    int maxnum = INT_MIN;
    int minnum = INT_MAX;
    
    // Find maximum and minimum
    for (int i = 0; i < n; i++) {
        if (array[i] > maxnum) {
            maxnum = array[i];
        }
        if (array[i] < minnum) {
            minnum = array[i];
        }
    }
    
    cout << maxnum << " " << minnum << endl;
    return 0;
}