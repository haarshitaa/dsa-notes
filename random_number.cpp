#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int x = rand();
    cout << "The random number is: " << x << endl;
    cout << "Here is another: " << rand() << endl;
    cout << "And another: " << rand() << endl;
    return 0;
}
