#include <bits/stdc++.h>
using namespace std;

void Intersection(int arr1[], int arr2[], int arr3[], int x, int y, int z) {
    int i = 0, j = 0, k = 0;
    while (i < x && j < y && k < z) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    int x, y, z;
    cin >> x;
    int arr1[x];
    for (int i = 0; i < x; i++) {
        cin >> arr1[i];
    }
    cin >> y;
    int arr2[y];
    for (int i = 0; i < y; i++) {
        cin >> arr2[i];
    }
    cin >> z;
    int arr3[z];
    for (int i = 0; i < z; i++) {
        cin >> arr3[i];
    }
    cout << "Intersection is: ";
    Intersection(arr1, arr2, arr3, x, y, z);
    return 0;
}