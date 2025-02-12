#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "abcefghijklmnop";
    s1.erase(3, 5); // Erase 5 characters starting from index 3
    cout << s1 << endl;
    return 0;
}