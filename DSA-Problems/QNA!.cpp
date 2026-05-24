/*
    Printing 1 to N numbers by Using The Recursion
 */

#include <iostream>
using namespace std;

int printingNumbers(int k);

int main() {
    int k;
    cout << "Enter a number: ";
    cin >> k;
    printingNumbers(k);
    return 0;
}

int printingNumbers(int k) {
    if (k == 0) {
        cout << k;
        return 0;
    }
    cout << k << "  ";
    printingNumbers(k - 1);
}
