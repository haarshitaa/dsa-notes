#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "abcefghijklmnop";
    s1.insert(2, "lolo"); // Insert "lolo" at index 2
    cout << s1 << endl;
    return 0;
}