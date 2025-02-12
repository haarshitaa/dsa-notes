#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int x = (rand() % 100 + 1); // Random number between 1 and 100
    cout << "The random number is: " << x << endl;
    cout << "Here is another: " << rand() << endl;
    cout << "And another: " << rand() << endl;
    return 0;
}
