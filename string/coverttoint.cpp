#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "786";
    int x = stoi(s1); // Convert string to integer
    cout << x + 2 << endl; // Output: 788
    return 0;
}