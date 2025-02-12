#include <iostream>
using namespace std;

int main() {
    char arr[100] = "apple"; // Initialize a character array
    int i = 0;

    // Print each character until the null terminator is reached
    while (arr[i] != '\0') {
        cout << arr[i] << endl;
        i++;
    }
    return 0;
}