#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "bahil .... is ,,, a ||1 ..>>>> good boy .::;; ";
    vector<int> ad(52, 0); // For A-Z and a-z

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            ad[c - 'A']++;
        } else if (c >= 'a' && c <= 'z') {
            ad[c - 'a' + 26]++;
        }
    }

    for (int i = 0; i < ad.size(); i++) {
        if (ad[i] != 0) {
            char c = (i < 26) ? ('A' + i) : ('a' + i - 26);
            cout << c << " occurs " << ad[i] << " times." << endl;
        }
    }
    return 0;
}