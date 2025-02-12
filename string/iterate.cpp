#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "abcefghijklmnop";
    for (int i = 0; i < s1.length(); i++) {
        cout << s1[i] << endl; // Print each character
    }
    return 0;
}