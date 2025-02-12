#include <iostream>
using namespace std;

int main() {
    int side1 = 5;
    int side2 = 3;
    
    for (int i = 1; i <= side1; i++) {
        for (int j = 1; j <= side2; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
