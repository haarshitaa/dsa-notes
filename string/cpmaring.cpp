#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "abc";
    string s2 = "abc";
    if (s1.compare(s2) == 0) { // Compare s1 and s2
        cout << "Strings are equal" << endl;
    }
    cout << s2.compare(s1) << endl; // Output comparison result
    return 0;
}