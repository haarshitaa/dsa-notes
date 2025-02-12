#include <iostream>
#include <string>
#include <algorithm> // For sort()
using namespace std;

int main() {
    string s = "565767";
    sort(s.begin(), s.end(), greater<int>()); // Sort in descending order
    cout << s << endl;
    return 0;
}