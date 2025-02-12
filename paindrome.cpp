#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the length of the string
    char arr[n + 1]; // Declare a character array with space for null terminator
    cin >> arr; // Input the string

    bool check = true; // Assume the string is a palindrome

    // Check if the string is a palindrome
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            check = false; // If characters don't match, it's not a palindrome
            break;
        }
    }

    // Output the result
    if (check) {
        cout << "Word is a palindrome" << endl;
    } else {
        cout << "Word is not a palindrome" << endl;
    }
    return 0;
}