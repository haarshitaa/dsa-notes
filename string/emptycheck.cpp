#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "abc";
    cout << s1 << endl;
    s1.clear(); // Clear the string
    if (s1.empty()) { // Check if the string is empty
        cout << "String is empty" << endl;
    }
    return 0;
}