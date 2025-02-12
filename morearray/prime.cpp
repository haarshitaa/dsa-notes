#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    int count = 0;

    // Check divisors up to the square root of num
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count++;
            if ((num / i) != i) {
                count++;
            }
        }
    }

    // A prime number has exactly 2 divisors
    if (count == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}