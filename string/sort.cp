#include <iostream>
#include <string>
#include <algorithm> // For sort()
using namespace std;

int main() {
    string s1 = "gjgjeghjesvdsgdvsgshfweghfvcb";
    sort(s1.begin(), s1.end()); // Sort the string
    cout << s1 << endl;
    return 0;
}